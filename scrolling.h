#ifndef SCROLLING_H_INCLUDED
#define SCROLLING_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#pragma comment(lib,"SDL.lib")
#pragma comment(lib,"sdlmain.lib")
#define SPEED 1
#define IMX 2900
#define IMY 2900
SDL_Surface*background,*screen,*pic2;
SDL_Rect position2;
struct camera
{
SDL_Rect positioncamera;
};typedef struct camera camera;
Uint8 *key;
int x,y;
position2.x = 500;
position2.y = 500;
x=y=0;
void scrolling(int x,int y,int IMX,int IMY,int SPEED,camera *c);
SDL_Surface *loading(const char *fic);
int negatmodulo(int x,int mod);
#endif //SCROLLING_H_INCLUDED
