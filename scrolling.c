#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include "scrolling.h"

void scrolling (SDL_Rect *camera,joueur j)
{
  camera->x = 2*2*2*(j.position).x;
  camera->y = 2*2*2*(j.position).y;
camera->h=800;
camera->w=800;
}
