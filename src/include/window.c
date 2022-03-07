
#include "screen.h"
#include "window.h"
#include "sdlchecks.h"


void initSDL(window *win,
             const Uint32 initType,
             const unsigned int width, const unsigned int height,
             const Uint32 flag,
             const char *title){

  scc(SDL_Init(initType));

  win->window = scp(SDL_CreateWindow(title, 
                                     SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                     width, height,
                                     flag));

  win->renderer = scp(SDL_CreateRenderer(win->window,
                                         -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC));

}



void updateWindow(SDL_Renderer *renderer, const Uint32 windowColour){
  scc(SDL_SetRenderDrawColor(renderer,
                             UNHEX_UINT32_ARGS(windowColour)));
                               
  scc(SDL_RenderClear(renderer)); // clear the renderer

  /*
  **
  ** Render Events Here:
  **
  */

  SDL_RenderPresent(renderer);

}



void exitSDL(window *win){

  /*
  **
  ** Exit Commands Here:
  **
  */

  SDL_DestroyWindow(win->window);
  SDL_DestroyRenderer(win->renderer);

  SDL_Quit();
}