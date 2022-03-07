
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "include/screen.h"
#include "include/window.h"

const Uint32 WINDOW_COLOUR = 0x593A6BFF;



window win = {0};


int main(void){
  initSDL(&win, 
          SDL_INIT_EVERYTHING, 
          SCREEN_WIDTH, SCREEN_HEIGHT, 
          SDL_WINDOW_RESIZABLE, 
          "Template");
  

  // Main Loop
  state st = RUNNING;
  while(st){
    SDL_Event event = {0};

    eventLoop(&event, &st);
    updateWindow(win.renderer,
                 WINDOW_COLOUR);
  }

  exitSDL(&win);

  return 0;
}



