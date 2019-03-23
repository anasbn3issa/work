#include "scrolling.h"
void scrolling(int x,int y,int IMX,int IMY,int SPEED,camera *c)
{
do
{
key=SDL_GetKeyState(NULL);
SDL_PumpEvents();
if(key[SDLK_LEFT])
{
 x+=SPEED;
}
if(key[SDLK_RIGHT])
{
 x-=SPEED;
}
if(key[SDLK_UP])
{
 y+=SPEED;
}
if(key[SDLK_DOWN])
{
 y-=SPEED;
}
c->positioncamera.x=negatmodulo(x,IMX);
c->positioncamera.y=negatmodulo(y,IMY);
SDL_BlitSurface(background,NULL,screen,&positioncamera);
c->positioncamera.x=negatmodulo(x,IMX)-IMX;
c->positioncamera.y=negatmodulo(y,IMY);
SDL_BlitSurface(background,NULL,screen,&positioncamera);
c->positioncamera.x=negatmodulo(x,IMX)-IMX;
c->positioncamera.y=negatmodulo(y,IMY)-IMY;
SDL_BlitSurface(background,NULL,screen,&positioncamera);
c->positioncamera.x=negatmodulo(x,IMX);
c->positioncamera.y=negatmodulo(y,IMY)-IMY;
SDL_Flip(screen);
SDL_Delay(3);
}while(!key[SDLK_ESCAPE]);
int negatmodulo(int x,int mod)
{
if(x>=0)
  return x%mod;
return (x%mod)+mod;
}
