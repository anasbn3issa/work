#ifndef AFFICHECHAR_H_INCLUDED
#define AFFICHECHAR_H_INCLUDED

typedef struct joueur
{

  SDL_Surface *im;
  SDL_Rect position ;

}joueur; 


void initjoueur (joueur *pl);/*initialisation de joueur*/
void afficherjoueur(joueur *j,SDL_Surface *ecran);
int collisionjoueur (SDL_Surface* image,joueur *j,int d,int  b);
SDL_Color GetPixel ( SDL_Surface* pSurface , int x , int y);
