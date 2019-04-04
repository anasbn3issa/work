#ifndef ENNEMI_H_INCLUDED
#define ENNEMI_H_INCLUDED
typedef struct ennemi
{

  SDL_Surface *im;
  SDL_Rect position ;

}ennemi;
void initennemi (ennemi *e);
void afficherennemi (ennemi *e,SDL_Surface *ecran);
void deplacementennemi(ennemi *e,int dir,int i,SDL_Surface *ecran);



#endif // ENNEMI_H_INCLUDED
