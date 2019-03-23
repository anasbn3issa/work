#ifndef SCROLLING_H_INCLUDED
#define SCROLLING_H_INCLUDED
#include "initbackground.h"
#include "scrolling.h"
Uint8 *key;
SDL_Event event;
void move(SDL_Event event,SDL_Surface *screen,*background,*image2,SDL_Rect position2,backgroundposition);
void movems(SDL_Event event,SDL_Surface *screen,*background,*image2,SDL_Rect position2,backgroundposition);
#endif //SCROLLING_H_INCLUDED
