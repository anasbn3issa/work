#ifndef SCROLLING_H_INCLUDED
#define SCROLLING_H_INCLUDED
#include "player.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
void scrolling (SDL_Rect *camera,joueur j);
void initialiserscrolling(SDL_Rect *camera);

#endif // SCROLLING_H_INCLUDED
