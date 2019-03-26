#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED
#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL_audio.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>

struct score{
	SDL_Surface  *coeur1[50],*coeur2; 
	SDL_Rect  pos1,pos2,pos3; 
int nbr_de_vie;
	
};typedef  struct score score; 

void init_score(score *s,char vie[]); 
void affichage_score0(score *s,SDL_Surface *ecran,int *i);
void affichage_score1(score *s,SDL_Surface *ecran,int *i);
void affichage_score2(score *s,SDL_Surface *ecran,int *i);
void free_score(score *s); 
#endif // SCORE_H_INCLUDED
