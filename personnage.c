#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "personage.h"


SDL_Color GetPixel ( SDL_Surface* pSurface , int x , int y)
{
 SDL_Color color;
 Uint32 col = 0;
 char *pPosition = (char *) pSurface ->pixels;
 pPosition += (pSurface ->pitch * y);
 pPosition += (pSurface->format->BytesPerPixel * x);
 memcpy (&col ,pPosition , pSurface->format->BytesPerPixel);
 SDL_GetRGB(col ,pSurface->format , &color.r , &color.g , &color.b);
 return (color) ;
}

int collisionjoueur (SDL_Surface* image,joueur *j,int d,int b)
{
SDL_Color p;
float X,Y;
switch (d)
  {
   case 1 :
     X= j->position.x +16.4;
     Y= j->position.y +9.6;
     break;
   case 2 :
     X= j->position.x +16.4;
     Y= j->position.y -9.6;
     break;
   case 3 :
     X= j->position.x -16.4;
     Y= j->position.y -9.6;
     break;       
   case 4 :
     X= j->position.x -16.4;
     Y= j->position.y +9.6;
     break;
  }
X+=266;
p=GetPixel (image,X,Y);
if (((p.r==255)&&(p.b==255)&&(p.g==255))||((p.r==255)&&(p.b==0)&&(p.g==0)&&(b==0)))
	return 1;
else 
	return 0;
}



void initjoueur (joueur *j)

{
    
    j->position.x =2100 ;
    j->position.y =240 ;
    j->im = IMG_Load("player1.png");
}


void afficherjoueur(joueur *j,SDL_Surface *ecran)
{
 SDL_BlitSurface(j->im, NULL, ecran, &j->position);
}
