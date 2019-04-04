#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "boundingbox.h"
int collision(SDL_Rect box1,SDL_Rect box2)
{
if ((box2.x>=box1.x + box1.w) // trop a droite
|| (box2.x += box2.w <= box1.x)//trop a gauche
|| (box2.y >= box1.y + box1.h)// trop en bas
|| (box2.y + box2.h <= box1.h))//trop en haut
return 0;
else
return 1;
}
