#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

typedef struct joueur
{

  SDL_Surface *im;
  SDL_Rect position ;

}joueur; 

int direction;
void initjoueur (joueur *pl);
void afficherjoueur(joueur *j,SDL_Surface *ecran);
void deplacementjoueur (joueur *j,SDL_Event event,int i);
#endif // PLAYER_H_INCLUDED
