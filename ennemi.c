#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "ennemi.h"
void initennemi (ennemi *e)
{e->position.x =225 ;
 e->position.y =150 ;
 e->im = IMG_Load("Eskandrdroite.png");}
 void afficherennemi(ennemi *e,SDL_Surface *ecran)
{
 SDL_BlitSurface(e->im, NULL, ecran, &e->position);
SDL_FreeSurface(e->im);
}
void deplacementennemi(ennemi *e,int dir ,SDL_Surface *ecran)
{
int i;

if (dir==0)
{for (i=0;i<1;i++)
{e->position.x +=5;
e->im= IMG_Load("Eskanderdroite.png");
SDL_BlitSurface(e->im, NULL, ecran, &e->position);
SDL_Flip(ecran);SDL_FreeSurface(e->im);}}
else if(dir==1)
{for (i=0;i<1;i++)
{e->position.x -=5;
e->im= IMG_Load("Eskandergauche.png");
SDL_BlitSurface(e->im, NULL, ecran, &e->position);
SDL_Flip(ecran);SDL_FreeSurface(e->im);}}}

                                     
