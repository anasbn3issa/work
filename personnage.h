
#ifndef AFFICHECHAR_H_INCLUDED
#define AFFICHECHAR_H_INCLUDED

typedef struct joueur
{

SDL_Surface *im;
  SDL_Rect position ;

}joueur; 


void initjoueur (joueur *j);/*initialisation de joueur*/
void afficherjoueur(joueur *j,SDL_Surface *ecran);
int collisionjoueur (SDL_Surface* image,joueur *j,int d);
SDL_Color GetPixel ( SDL_Surface* pSurface , int x , int y);
