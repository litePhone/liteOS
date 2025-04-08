#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *home;
    lv_obj_t *lock_screen;
    lv_obj_t *boot_splash;
    lv_obj_t *boot_spinner;
    lv_obj_t *boot_title;
    lv_obj_t *version_identifier;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_HOME = 1,
    SCREEN_ID_LOCK_SCREEN = 2,
    SCREEN_ID_BOOT_SPLASH = 3,
};

void create_screen_home();
void tick_screen_home();

void create_screen_lock_screen();
void tick_screen_lock_screen();

void create_screen_boot_splash();
void tick_screen_boot_splash();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/