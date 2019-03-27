#include"score.h"
void initialiservie(vie *vie)
{
vie->nb=3;
vie->position.x = -600 ;
vie->position.y = 0 ;
vie->fond1 = IMG_Load("vie1/v1.png");
vie->fond2 = IMG_Load("vie1/v2.png");
vie->fond3 = IMG_Load("vie1/v3.png");
vie->fond4 = IMG_Load("vie1/v4.png");
vie->fond5 = IMG_Load("GameOver.png");
}
void affichervie(vie *vie,SDL_Surface *ecran)
{
if(vie->nb==3)
{
SDL_BlitSurface(vie->fond1,NULL, ecran,&vie->position);

}
if(vie->nb==2)
{
SDL_BlitSurface(vie->fond2,NULL, ecran,&vie->position);
}
if(vie->nb==1)
{
SDL_BlitSurface(vie->fond3,NULL, ecran,&vie->position);
}
if(vie->nb==0)
{
SDL_BlitSurface(vie->fond4,NULL, ecran,&vie->position);
SDL_BlitSurface(vie->fond5,NULL, ecran,&vie->position);

SDL_Flip(ecran);

}
}
void free_score(vie *vie)
{
      

	SDL_FreeSurface(vie->fond1);
	SDL_FreeSurface(vie->fond2);	
	SDL_FreeSurface(vie->fond3);	
	SDL_FreeSurface(vie->fond4);	
	SDL_FreeSurface(vie->fond5);		
	
}
