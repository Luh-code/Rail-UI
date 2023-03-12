#include <railR/railR.h>
int main()
{
  rail_sdl_init();

  SDL_Window* win = SDL_CreateWindow("TestProgram",
                                      800,
                                      600,
                                      SDL_WINDOW_OPENGL);
  while (1)
      ;

  return 0;
}