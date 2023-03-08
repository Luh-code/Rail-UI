#include "Window.h"

bool rail_sdl_init()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
  {
    rail_log_error("error initializing SDL: %s", SDL_GetError());
    return false;
  }
  return true;
}