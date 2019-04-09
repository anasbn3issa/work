#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "map.h"
#include "ennemi.h"

typedef struct //joueur
{

  SDL_Surface *im;
  SDL_Rect position;

}joueur; 


void initjoueur (joueur *j);/*initialisation de joueur*/
void afficherjoueur(joueur *j,SDL_Surface *ecran);
void deplacementjoueur (joueur *j,SDL_Event event,int i,SDL_Surface *surface);/*deplacement de personage*/
int collisionjoueur(SDL_Surface *image,joueur *j, int d);
SDL_Color GetPixel ( SDL_Surface* pSurface , int x , int y);
void animation(joueur *j, int d, int i);
void animation_ennemi (ennemi *e, int d, int i);

#endif // AFFICHECHAR_H_INCLUDED

