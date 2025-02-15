/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_main_page(lv_ui *ui){

	//Write codes main_page
	ui->main_page = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->main_page, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_main_page_main_main_default
	static lv_style_t style_main_page_main_main_default;
	if (style_main_page_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_main_page_main_main_default);
	else
		lv_style_init(&style_main_page_main_main_default);
	lv_style_set_bg_color(&style_main_page_main_main_default, lv_color_make(0x1D, 0x23, 0x32));
	lv_style_set_bg_opa(&style_main_page_main_main_default, 255);
	lv_obj_add_style(ui->main_page, &style_main_page_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_page_imgbtn_1
	ui->main_page_imgbtn_1 = lv_imgbtn_create(ui->main_page);
	lv_obj_set_pos(ui->main_page_imgbtn_1, 38, 112);
	lv_obj_set_size(ui->main_page_imgbtn_1, 114, 114);
	lv_obj_set_scrollbar_mode(ui->main_page_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_main_page_imgbtn_1_main_main_default
	static lv_style_t style_main_page_imgbtn_1_main_main_default;
	if (style_main_page_imgbtn_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_1_main_main_default);
	else
		lv_style_init(&style_main_page_imgbtn_1_main_main_default);
	lv_style_set_shadow_width(&style_main_page_imgbtn_1_main_main_default, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_1_main_main_default, 0);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_1_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_1_main_main_default, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_1_main_main_default, lv_color_make(0xee, 0xe1, 0xe1));
	lv_style_set_text_align(&style_main_page_imgbtn_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_main_page_imgbtn_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_1_main_main_default, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_1_main_main_default, 255);
	lv_obj_add_style(ui->main_page_imgbtn_1, &style_main_page_imgbtn_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_main_page_imgbtn_1_main_main_pressed
	static lv_style_t style_main_page_imgbtn_1_main_main_pressed;
	if (style_main_page_imgbtn_1_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_1_main_main_pressed);
	else
		lv_style_init(&style_main_page_imgbtn_1_main_main_pressed);
	lv_style_set_shadow_width(&style_main_page_imgbtn_1_main_main_pressed, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_1_main_main_pressed, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_1_main_main_pressed, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_1_main_main_pressed, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_1_main_main_pressed, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_1_main_main_pressed, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_1_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_main_page_imgbtn_1_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_1_main_main_pressed, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_1_main_main_pressed, 255);
	lv_obj_add_style(ui->main_page_imgbtn_1, &style_main_page_imgbtn_1_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_main_page_imgbtn_1_main_main_checked
	static lv_style_t style_main_page_imgbtn_1_main_main_checked;
	if (style_main_page_imgbtn_1_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_1_main_main_checked);
	else
		lv_style_init(&style_main_page_imgbtn_1_main_main_checked);
	lv_style_set_shadow_width(&style_main_page_imgbtn_1_main_main_checked, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_1_main_main_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_1_main_main_checked, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_1_main_main_checked, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_1_main_main_checked, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_1_main_main_checked, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_1_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_main_page_imgbtn_1_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_1_main_main_checked, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_1_main_main_checked, 255);
	lv_obj_add_style(ui->main_page_imgbtn_1, &style_main_page_imgbtn_1_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->main_page_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_pic_engraving_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_pic_engraving_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_pic_engraving_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_pic_engraving_114x114, NULL);
	lv_obj_add_flag(ui->main_page_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);

	//Write codes main_page_imgbtn_2
	ui->main_page_imgbtn_2 = lv_imgbtn_create(ui->main_page);
	lv_obj_set_pos(ui->main_page_imgbtn_2, 183, 112);
	lv_obj_set_size(ui->main_page_imgbtn_2, 114, 114);
	lv_obj_set_scrollbar_mode(ui->main_page_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_main_page_imgbtn_2_main_main_default
	static lv_style_t style_main_page_imgbtn_2_main_main_default;
	if (style_main_page_imgbtn_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_2_main_main_default);
	else
		lv_style_init(&style_main_page_imgbtn_2_main_main_default);
	lv_style_set_shadow_width(&style_main_page_imgbtn_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_2_main_main_default, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_2_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_main_page_imgbtn_2_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_main_page_imgbtn_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_2_main_main_default, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_2_main_main_default, 255);
	lv_obj_add_style(ui->main_page_imgbtn_2, &style_main_page_imgbtn_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_main_page_imgbtn_2_main_main_pressed
	static lv_style_t style_main_page_imgbtn_2_main_main_pressed;
	if (style_main_page_imgbtn_2_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_2_main_main_pressed);
	else
		lv_style_init(&style_main_page_imgbtn_2_main_main_pressed);
	lv_style_set_shadow_width(&style_main_page_imgbtn_2_main_main_pressed, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_2_main_main_pressed, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_2_main_main_pressed, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_2_main_main_pressed, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_2_main_main_pressed, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_2_main_main_pressed, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_2_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_main_page_imgbtn_2_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_2_main_main_pressed, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_2_main_main_pressed, 255);
	lv_obj_add_style(ui->main_page_imgbtn_2, &style_main_page_imgbtn_2_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_main_page_imgbtn_2_main_main_checked
	static lv_style_t style_main_page_imgbtn_2_main_main_checked;
	if (style_main_page_imgbtn_2_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_2_main_main_checked);
	else
		lv_style_init(&style_main_page_imgbtn_2_main_main_checked);
	lv_style_set_shadow_width(&style_main_page_imgbtn_2_main_main_checked, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_2_main_main_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_2_main_main_checked, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_2_main_main_checked, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_2_main_main_checked, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_2_main_main_checked, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_2_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_main_page_imgbtn_2_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_2_main_main_checked, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_2_main_main_checked, 255);
	lv_obj_add_style(ui->main_page_imgbtn_2, &style_main_page_imgbtn_2_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->main_page_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_pic_control_alpha_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_pic_control_alpha_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_pic_control_alpha_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_pic_control_alpha_114x114, NULL);
	lv_obj_add_flag(ui->main_page_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);

	//Write codes main_page_imgbtn_3
	ui->main_page_imgbtn_3 = lv_imgbtn_create(ui->main_page);
	lv_obj_set_pos(ui->main_page_imgbtn_3, 328, 112);
	lv_obj_set_size(ui->main_page_imgbtn_3, 114, 114);
	lv_obj_set_scrollbar_mode(ui->main_page_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_main_page_imgbtn_3_main_main_default
	static lv_style_t style_main_page_imgbtn_3_main_main_default;
	if (style_main_page_imgbtn_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_3_main_main_default);
	else
		lv_style_init(&style_main_page_imgbtn_3_main_main_default);
	lv_style_set_shadow_width(&style_main_page_imgbtn_3_main_main_default, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_3_main_main_default, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_3_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_3_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_3_main_main_default, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_3_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_main_page_imgbtn_3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_main_page_imgbtn_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_3_main_main_default, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_3_main_main_default, 255);
	lv_obj_add_style(ui->main_page_imgbtn_3, &style_main_page_imgbtn_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_main_page_imgbtn_3_main_main_pressed
	static lv_style_t style_main_page_imgbtn_3_main_main_pressed;
	if (style_main_page_imgbtn_3_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_3_main_main_pressed);
	else
		lv_style_init(&style_main_page_imgbtn_3_main_main_pressed);
	lv_style_set_shadow_width(&style_main_page_imgbtn_3_main_main_pressed, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_3_main_main_pressed, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_3_main_main_pressed, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_3_main_main_pressed, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_3_main_main_pressed, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_3_main_main_pressed, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_3_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_main_page_imgbtn_3_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_3_main_main_pressed, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_3_main_main_pressed, 255);
	lv_obj_add_style(ui->main_page_imgbtn_3, &style_main_page_imgbtn_3_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_main_page_imgbtn_3_main_main_checked
	static lv_style_t style_main_page_imgbtn_3_main_main_checked;
	if (style_main_page_imgbtn_3_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_main_page_imgbtn_3_main_main_checked);
	else
		lv_style_init(&style_main_page_imgbtn_3_main_main_checked);
	lv_style_set_shadow_width(&style_main_page_imgbtn_3_main_main_checked, 0);
	lv_style_set_shadow_color(&style_main_page_imgbtn_3_main_main_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_imgbtn_3_main_main_checked, 255);
	lv_style_set_shadow_spread(&style_main_page_imgbtn_3_main_main_checked, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_imgbtn_3_main_main_checked, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_imgbtn_3_main_main_checked, 0);
	lv_style_set_text_color(&style_main_page_imgbtn_3_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_main_page_imgbtn_3_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_main_page_imgbtn_3_main_main_checked, 0);
	lv_style_set_img_opa(&style_main_page_imgbtn_3_main_main_checked, 255);
	lv_obj_add_style(ui->main_page_imgbtn_3, &style_main_page_imgbtn_3_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->main_page_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_pic_tool_alpha_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_pic_tool_alpha_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_pic_tool_alpha_114x114, NULL);
	lv_imgbtn_set_src(ui->main_page_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_pic_tool_alpha_114x114, NULL);
	lv_obj_add_flag(ui->main_page_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);

	//Write codes main_page_label_1
	ui->main_page_label_1 = lv_label_create(ui->main_page);
	lv_obj_set_pos(ui->main_page_label_1, 38, 226);
	lv_obj_set_size(ui->main_page_label_1, 114, 32);
	lv_obj_set_scrollbar_mode(ui->main_page_label_1, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->main_page_label_1, "Engraving");
	lv_label_set_long_mode(ui->main_page_label_1, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_main_page_label_1_main_main_default
	static lv_style_t style_main_page_label_1_main_main_default;
	if (style_main_page_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_main_page_label_1_main_main_default);
	else
		lv_style_init(&style_main_page_label_1_main_main_default);
	lv_style_set_radius(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_main_page_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_main_page_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_main_page_label_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_shadow_width(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_shadow_color(&style_main_page_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_label_1_main_main_default, 255);
	lv_style_set_shadow_spread(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_main_page_label_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_main_page_label_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_main_page_label_1_main_main_default, 2);
	lv_style_set_text_line_space(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_text_align(&style_main_page_label_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_main_page_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_main_page_label_1_main_main_default, 8);
	lv_style_set_pad_bottom(&style_main_page_label_1_main_main_default, 0);
	lv_obj_add_style(ui->main_page_label_1, &style_main_page_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_page_label_2
	ui->main_page_label_2 = lv_label_create(ui->main_page);
	lv_obj_set_pos(ui->main_page_label_2, 183, 226);
	lv_obj_set_size(ui->main_page_label_2, 114, 32);
	lv_obj_set_scrollbar_mode(ui->main_page_label_2, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->main_page_label_2, "Control");
	lv_label_set_long_mode(ui->main_page_label_2, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_main_page_label_2_main_main_default
	static lv_style_t style_main_page_label_2_main_main_default;
	if (style_main_page_label_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_main_page_label_2_main_main_default);
	else
		lv_style_init(&style_main_page_label_2_main_main_default);
	lv_style_set_radius(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_bg_color(&style_main_page_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_main_page_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_main_page_label_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_shadow_width(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_main_page_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_label_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_text_color(&style_main_page_label_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_main_page_label_2_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_main_page_label_2_main_main_default, 2);
	lv_style_set_text_line_space(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_text_align(&style_main_page_label_2_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_pad_right(&style_main_page_label_2_main_main_default, 0);
	lv_style_set_pad_top(&style_main_page_label_2_main_main_default, 8);
	lv_style_set_pad_bottom(&style_main_page_label_2_main_main_default, 0);
	lv_obj_add_style(ui->main_page_label_2, &style_main_page_label_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_page_label_3
	ui->main_page_label_3 = lv_label_create(ui->main_page);
	lv_obj_set_pos(ui->main_page_label_3, 328, 226);
	lv_obj_set_size(ui->main_page_label_3, 114, 32);
	lv_obj_set_scrollbar_mode(ui->main_page_label_3, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->main_page_label_3, "Tool");
	lv_label_set_long_mode(ui->main_page_label_3, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_main_page_label_3_main_main_default
	static lv_style_t style_main_page_label_3_main_main_default;
	if (style_main_page_label_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_main_page_label_3_main_main_default);
	else
		lv_style_init(&style_main_page_label_3_main_main_default);
	lv_style_set_radius(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_bg_color(&style_main_page_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_main_page_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_main_page_label_3_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_shadow_color(&style_main_page_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_main_page_label_3_main_main_default, 255);
	lv_style_set_shadow_spread(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_text_color(&style_main_page_label_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_main_page_label_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_main_page_label_3_main_main_default, 2);
	lv_style_set_text_line_space(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_text_align(&style_main_page_label_3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_pad_right(&style_main_page_label_3_main_main_default, 0);
	lv_style_set_pad_top(&style_main_page_label_3_main_main_default, 8);
	lv_style_set_pad_bottom(&style_main_page_label_3_main_main_default, 0);
	lv_obj_add_style(ui->main_page_label_3, &style_main_page_label_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_main_page(ui);
}