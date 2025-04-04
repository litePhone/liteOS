// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: liteOS_Alpha

#ifndef _LITEOS_ALPHA_UI_H
#define _LITEOS_ALPHA_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Boot
void ui_Boot_screen_init(void);
void ui_event_Boot(lv_event_t * e);
extern lv_obj_t * ui_Boot;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_Spinner1;
// CUSTOM VARIABLES

// SCREEN: ui_Home
void ui_Home_screen_init(void);
extern lv_obj_t * ui_Home;
extern lv_obj_t * ui_MainMenu;
extern lv_obj_t * ui_MenuSelect;
extern lv_obj_t * ui_MenuSelect2;
// CUSTOM VARIABLES
extern lv_obj_t * uic_MainMenu;

// SCREEN: ui_Phone
void ui_Phone_screen_init(void);
extern lv_obj_t * ui_Phone;
extern lv_obj_t * ui_PhoneKeyboard;
extern lv_obj_t * ui_PhoneNumInput;
void ui_event_HomeBtn(lv_event_t * e);
extern lv_obj_t * ui_HomeBtn;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Label3;
// CUSTOM VARIABLES

// SCREEN: ui_Settings
void ui_Settings_screen_init(void);
extern lv_obj_t * ui_Settings;
extern lv_obj_t * ui_Label7;
void ui_event_HomeBtn2(lv_event_t * e);
extern lv_obj_t * ui_HomeBtn2;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_TabView2;
extern lv_obj_t * ui_About;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_Modem;
extern lv_obj_t * ui_Support;
// CUSTOM VARIABLES

// SCREEN: ui_Messages
void ui_Messages_screen_init(void);
extern lv_obj_t * ui_Messages;
extern lv_obj_t * ui_Label2;
void ui_event_HomeBtn3(lv_event_t * e);
extern lv_obj_t * ui_HomeBtn3;
extern lv_obj_t * ui_Label11;
// CUSTOM VARIABLES

// SCREEN: ui_ActiveCall
void ui_ActiveCall_screen_init(void);
extern lv_obj_t * ui_ActiveCall;
void ui_event_EndCall(lv_event_t * e);
extern lv_obj_t * ui_EndCall;
extern lv_obj_t * ui_Label8;
// CUSTOM VARIABLES

// SCREEN: ui_IncomingCall
void ui_IncomingCall_screen_init(void);
extern lv_obj_t * ui_IncomingCall;
extern lv_obj_t * ui_Label6;
// CUSTOM VARIABLES

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
