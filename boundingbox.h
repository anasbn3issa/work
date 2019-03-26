
#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>

typedef struct AABB //axis aligned bounding box
{
int x;
int y;
int w;
int h;
}AABB;
#endif // COLLISION_H_INCLUDED
