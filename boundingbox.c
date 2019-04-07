#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "boundingbox.h"
int collision(SDL_Rect box1,SDL_Rect box2)
{
if(box1.y>=box2.y+box2.h)
return 0;
if (box1.x>=box2.x+box2.w)
return 0;
if (box1.y+box1.h<=box2.y)
return 0;
if (box1.x+box1.w<=box2.x)
return 0;
return 1;
}
