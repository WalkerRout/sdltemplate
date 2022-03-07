
#include "event.h"
#include "screen.h"



void handleEvents(const SDL_EventType *type){
  switch(*type){

    /*
    **
    ** Event Handling Here:
    **
    */

    default: {}
  }

}



void eventLoop(const SDL_Event *event, state *st){

  while(SDL_PollEvent(event)){
    // Handle quit event
    if(event->type == SDL_QUIT){
      SDL_Log("Quit!");
      *st = STOPPED;
    }

    /*
    **
    ** Event Handling Functions here:
    **
    */

    handleEvents(&(event->type));
  }
}
