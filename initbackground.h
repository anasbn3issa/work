#ifndef SCROLLING_H_INCLUDED
#define SCROLLING_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#pragma comment(lib,"SDL.lib")
#pragma comment(lib,"sdlmain.lib")
#define SPEED 1
#define IMX 2900
#define IMY 2900
SDL_Surface*background,*screen,*image2;
SDL_Rect position2;
SDL_Rect backgroundposition;
int x,y;
position2.x = 500;
position2.y = 500;
backgroundposition.x = 0;
backgroundposition.y = 0;
x=y=0;
SDL_Surface *loading(const char *fic);
#endif //SCROLLING_H_INCLUDED
