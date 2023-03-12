#ifndef __RAIL_WINDOW_H__
#define __RAIL_WINDOW_H__

#include <SDL3/SDL.h>
#include <SDL3/SDL_timer.h>

#include "Logger.h"

#include <stdbool.h>

__declspec(dllexport) extern __stdcall bool rail_sdl_init();
__declspec(dllexport) extern __stdcall SDL_Window* rail_create_window();

#endif // __RAIL_WINDOW_H__