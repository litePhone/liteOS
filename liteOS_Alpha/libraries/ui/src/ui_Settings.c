// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: liteOS_Alpha

#include "ui.h"

void ui_Settings_screen_init(void)
{
    ui_Settings = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Settings, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Settings, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Settings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Settings);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 93
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, -132);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Settings");

    ui_HomeBtn2 = lv_btn_create(ui_Settings);
    lv_obj_set_width(ui_HomeBtn2, 50);
    lv_obj_set_height(ui_HomeBtn2, 50);
    lv_obj_set_x(ui_HomeBtn2, -91);
    lv_obj_set_y(ui_HomeBtn2, -132);
    lv_obj_set_align(ui_HomeBtn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_HomeBtn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_HomeBtn2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_HomeBtn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeBtn2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_HomeBtn2);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "<");
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TabView2 = lv_tabview_create(ui_Settings, LV_DIR_LEFT, 60);
    lv_obj_set_width(ui_TabView2, 240);
    lv_obj_set_height(ui_TabView2, 262);
    lv_obj_set_x(ui_TabView2, 0);
    lv_obj_set_y(ui_TabView2, 25);
    lv_obj_set_align(ui_TabView2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TabView2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_TabView2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TabView2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(lv_tabview_get_tab_btns(ui_TabView2), lv_color_hex(0x000000),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_tabview_get_tab_btns(ui_TabView2), 255,  LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_About = lv_tabview_add_tab(ui_TabView2, "About");

    ui_Label4 = lv_label_create(ui_About);
    lv_obj_set_width(ui_Label4, 63);
    lv_obj_set_height(ui_Label4, 500);
    lv_obj_set_x(ui_Label4, -46);
    lv_obj_set_y(ui_Label4, -5);
    lv_obj_set_align(ui_Label4, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label4,
                      "MCU\n\nDisplay\n\nTouch\n\nModem\n\nSim Slot\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEaster Egg Lol :0");

    ui_Label13 = lv_label_create(ui_About);
    lv_obj_set_width(ui_Label13, 81);
    lv_obj_set_height(ui_Label13, 500);
    lv_obj_set_x(ui_Label13, 35);
    lv_obj_set_y(ui_Label13, -5);
    lv_obj_set_align(ui_Label13, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label13, "ESP32-S3\n\nILI9341\n\nXPT2046\n\nA7670G\n\nx2");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0x959494), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label13, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Modem = lv_tabview_add_tab(ui_TabView2, "Modem");

    ui_Support = lv_tabview_add_tab(ui_TabView2, "Support");

    lv_obj_add_event_cb(ui_HomeBtn2, ui_event_HomeBtn2, LV_EVENT_ALL, NULL);

}
