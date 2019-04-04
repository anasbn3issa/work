#ifndef _MAP_H_INCLUDED
#define _MAP_H_INCLUDED
#include "player.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

typedef struct map
{
  SDL_Surface *image;
  SDL_Surface *collision;
  SDL_Rect position;  
}map;
void initialisermap(map *map);
void affichermap(map *map,SDL_Rect camera,SDL_Surface *ecran);
#endif // MAP_H_INCLUDED
