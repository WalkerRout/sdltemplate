
#ifndef EVENT_H
#define EVENT_H

#include <SDL2/SDL.h>

#include "window.h"


void eventLoop(const SDL_Event *event, state *st);


#endif // EVENT_H