#include "hal_sdcard.h"

SDCard mysdcard;

uint8_t                    SD_client     = CLIENT_SERIAL;
uint32_t                   sd_current_line_number;     // stores the most recent line number read from the SD
SDState sd_state =         SDState::Idle;

#ifdef USE_HSPI_FOR_SD
    SPIClass SPI_H(HSPI);
#else 
    SPIClass SPI_L(VSPI);
#endif

const int UNDEFINED_PIN    = 255;

bool filename_check(char *str, uint16_t num) {

    char *p, *j, *k;
    
    if(num > 128) return false;
    // if(((str[num-1]=='c')||(str[num-1]='C')) && ((str[num-2] == 'n')||(str[num-2] == 'N'))) return true;  // .nc

    p = strstr(str, ".nc");
    if(p == NULL) p = strstr(str, ".NC");
    else return true;
        
    j = strstr(str, ".gcode");
    if(j == NULL) j = strstr(str, ".GCODE");
    else return true;

    k = strstr(str, ".gc");
    if(k == NULL) k = strstr(str, ".GC");
    else return true;

    if((p!=NULL) || (j!=NULL) || (k!=NULL)) return true;
    else return false;
}

char filename_check_str[255];

void SDCard::listDir(fs::FS& fs, const char* dirname, uint8_t levels, uint8_t client) {
    //char temp_filename[128]; // to help filter by extension	TODO: 128 needs a definition based on something
    File root = fs.open(dirname);

#if DEBUG_REMOVE
    if (!root) {
        report_status_message(Error::FsFailedOpenDir, client);
        return;
    }
#endif

    /* 检测文件夹 */
    if (!root.isDirectory()) {
        // report_status_message(Error::FsDirNotFound, client);
        return;
    }

    File file = root.openNextFile();

    while (file) {
        if (file.isDirectory()) {
            if (levels) {
                listDir(fs, file.name(), levels - 1, client);
            }
        } else {
            memset(filename_check_str, 0, sizeof(filename_check_str));
            strcpy(filename_check_str, file.name());
            if(filename_check(filename_check_str, strlen(filename_check_str)) == true) {
                // grbl_sendf(client, "[FILE:/%s|SIZE:%d]\r\n", file.name(), file.size());
            }
        }
        file = root.openNextFile();
    }
}

void SDCard::listDir(fs::FS& fs, const char* dirname){
    File root = fs.open(dirname);

    /* 检测文件夹 */
    if (!root.isDirectory()) {
        return;
    }
    currentDir = dirname;
    File file = root.openNextFile();
    fileList.list.clear();
    fileList.type.clear();

    while (file) {
        if (file.isDirectory()) {
            fileList.type.push_back(2);
        }
        else{
            fileList.type.push_back(1);
        }
                
        memset(filename_check_str, 0, sizeof(filename_check_str));
        strcpy(filename_check_str, file.name());
        fileList.list.push_back(file.name());
        file = root.openNextFile();
    }    
}

void SDCard::setSdNext(bool state) {
    SD_ready_next = state;
}

bool SDCard::getSdNext(void) {
    return SD_ready_next;
}

std::vector<std::string> SDCard::getFileList(){
    return fileList.list;
}

std::vector<uint8_t>     SDCard::getFileType(){
    return fileList.type;
}

std::string   SDCard::getCurrentDir(){
    return currentDir;
}

void  SDCard::cleanFileList()
{
    fileList.list.clear();
    fileList.type.clear();
}

bool    SDCard::isDirectory(fs::FS& fs, const char* dirname){
    File root = fs.open(dirname);
    bool ret = root.isDirectory();
    return ret;
}

void SDCard::cardInit() {
    #if (GRBL_SPI_SS != -1) || (GRBL_SPI_MISO != -1) || (GRBL_SPI_MOSI != -1) || (GRBL_SPI_SCK != -1)
        SD_SPI.begin(GRBL_SPI_SCK, GRBL_SPI_MISO, GRBL_SPI_MOSI, GRBL_SPI_SS);
    #endif
}

/* SD卡挂载 */
boolean SDCard::mount(void) {

    if (SD.begin((GRBL_SPI_SS == -1) ? SS : GRBL_SPI_SS, SD_SPI, GRBL_SPI_FREQ, SD_ROOT_PATH, SD_MAX_OPEN_FILE)) {
        debug_send(CLIENT_SERIAL, "TestCase1: SD begin ok..\n");
        if (SD.cardSize() > 0) {
            serial_send(CLIENT_SERIAL, "SD size ok..\n");
            sd_state = SDState::Idle;
            return true;
        }else {
            serial_send(CLIENT_SERIAL, "SD size err..\n");
            sd_state = SDState::NotPresent;
            return false;
        }
    }else {
        serial_send(CLIENT_SERIAL, "SD begin err..\n");
        sd_state = SDState::NotPresent;
        return false;
    }
}

void SDCard::unmount(void) {
    SD.end();
}

boolean SDCard::openFile(fs::FS& fs, const char* path) {
    myFile = fs.open(path);

    if (!myFile) {
        return false;
    }
    set_sd_state(SDState::BusyPrinting); 
    setSdNext(false);   /* this will get set to true when Grbl issues "ok" message */
    sd_current_line_number = 0;
    return true;
}

/* 
  close file
*/
boolean SDCard::closeFile() {
    if (!myFile) {
        return false;
    }
    set_sd_state(SDState::Idle);
    setSdNext(false);
    sd_current_line_number = 0;
    myFile.close();
    return true;
}


/*
  read a line from the SD card
  strip whitespace
  strip comments per http://linuxcnc.org/docs/ja/html/gcode/overview.html#gcode:comments
  make uppercase
  return true if a line is
*/
boolean SDCard::readFileLine(char* line, int maxlen) {
    if (!myFile) {
        // report_status_message(Error::FsFailedRead, SD_client);
        return false;
    }
    sd_current_line_number += 1;
    int len = 0;
    while (myFile.available()) {
        if (len >= maxlen) {
            return false;
        }
        char c = myFile.read();
        if (c == '\n') {
            break;
        }
        line[len++] = c;
    }
    line[len] = '\0';
    return len || myFile.available();
}

/* return a percentage complete 50.5 = 50.5% */
float SDCard::sd_report_perc_complete() {
    if (!myFile) { return 0.0; }
    return (float)myFile.position() / (float)myFile.size() * 100.0f;
}

uint32_t SDCard::sd_get_current_line_number() {
    return sd_current_line_number;
}

SDState SDCard::get_sd_state(bool refresh) {

    /* 确定是否由DET引脚，并且DET引脚是否为低电平 */
    if (SDCARD_DET_PIN != UNDEFINED_PIN) {
        if (digitalRead(SDCARD_DET_PIN) != SDCARD_DET_VAL) {
            sd_state = SDState::NotPresent;
            return sd_state;
        }
    }

    //if busy doing something return state
    if (!((sd_state == SDState::NotPresent) || (sd_state == SDState::Idle))) {
        return sd_state;
    }
    if (!refresh) {
        return sd_state;  //to avoid refresh=true + busy to reset SD and waste time
    }

    //SD is idle or not detected, let see if still the case
    unmount();
    sd_state = SDState::NotPresent;
    //using default value for speed ? should be parameter
    //refresh content if card was removed
    if (SD.begin((GRBL_SPI_SS == -1) ? SS : GRBL_SPI_SS, SD_SPI, GRBL_SPI_FREQ, SD_ROOT_PATH, SD_MAX_OPEN_FILE)) {
        if (SD.cardSize() > 0) {
            sd_state = SDState::Idle;
        }
    }
    return sd_state;
}

SDState SDCard::set_sd_state(SDState state) {
    sd_state = state;
    return sd_state;
}


void SDCard::sd_get_current_filename(char* name) {
    if (myFile) {
        strcpy(name, myFile.name());
    } else {
        name[0] = 0;
    }
}

uint64_t SDCard::get_sd_size(void) {
    return SD.cardSize() / (1024*1024);
}