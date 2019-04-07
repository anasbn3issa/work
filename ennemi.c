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
void deplacementennemi(ennemi *e,int dir ,int i )
{


if (dir==0)

{e->position.x +=5;
if (i==1) e->im= IMG_Load("Eskanderdroite.png");
if (i==2) e->im= IMG_Load("Eskandergauche.png");
SDL_Delay(50);
}
else if(dir==1)
{
e->position.x -=5;
if (i==1) e->im= IMG_Load("RED.png");
if (i==2) e->im= IMG_Load("REG.png");
SDL_Delay(50);
}}


                                     
