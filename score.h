#ifndef TRAP_H_INCLUDED
#define TRAP_H_INCLUDED




typedef struct vie
{
	int nb;
	SDL_Rect position;
	SDL_Surface *fond1;
	SDL_Surface *fond2;
	SDL_Surface *fond3;
	SDL_Surface *fond4;
	SDL_Surface *fond5;
}vie;


void initialiservie(vie *vie);

void affichervie(vie *vie,SDL_Surface *ecran);




#endif // TRAP_H_INCLUDED
