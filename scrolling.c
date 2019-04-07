#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include "scrolling.h"

void scrolling (SDL_Rect *camera,joueur j)
{
  camera->x = 36*(j.position).x;
  camera->y = 36*(j.position).y;
camera->h=800;
camera->w=800;
}
void initialiserscrolling(SDL_Rect *camera)
{
 camera->x=4000;
 camera->y=6661,026;
 camera->w=2661,026;
 camera->l=8000;  
  
  
}
