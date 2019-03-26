#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL_audio.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>
#include"objet.h"


void initobjet(objet *o) 
{ 
 	o->fond=IMG_Load("clee.jpg");
 	o->pos.x=2000; //blasset lclé
 	o->pos.y=2000; 
 }
 
 

  
void displayobjet( background *o , SDL_Surface *ecran ,camera c)
 {

	SDL_BlitSurface(o->fond,&(c.positionCamera),ecran,&o->pos);
	//SDL_Flip(ecran); 
 }

void freebackground(background *o)
{
	SDL_FreeSurface(o->fond); 

}
