SET(SOURCES ui_Boot.c
    ui_Home.c
    ui_Phone.c
    ui_Settings.c
    ui_Messages.c
    ui_ActiveCall.c
    ui_IncomingCall.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.c)

add_library(ui ${SOURCES})
