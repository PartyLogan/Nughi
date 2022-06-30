#pragma once

#include "defines.h"

struct game;

// Application configuration
typedef struct application_config {
    // Window starting position x and y
    i16 start_pos_x;
    i16 start_pos_y;

    // Window starting width and height.
    i16 start_width;
    i16 start_height;

    // Application name
    char* name;
} application_config;

KAPI b8 application_create(struct game* game_inst);
KAPI b8 application_run();