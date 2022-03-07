
#ifndef SCREEN_H
#define SCREEN_H

#include <SDL2/SDL.h>



typedef struct {
  SDL_Window *window;
  SDL_Renderer *renderer;
} window;


typedef enum {
  STOPPED,
  RUNNING
} state;



void initSDL(window *win,
             const Uint32 initType,
             const unsigned int width, const unsigned int height,
             const Uint32 flag,
             const char *title);

void updateWindow(SDL_Renderer *renderer,
                  const Uint32 windowColour);

void exitSDL(window *win);


#endif // SCREEN_H
