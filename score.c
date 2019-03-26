#include"score.h"
void init_score(score *s,char vie[])
{int i;
	
	s->pos1.x=400;
	s->pos1.y=10;
	s->pos2.x=340;
	s->pos2.y=10;
        s->pos3.x=280;
	s->pos3.y=10;
	s->pos.x=220;
	s->pos.y=10;
        s->nbr_de_vie=3;
for(i=0;i<3;i++)
{
      sprintf(vie,"vie%d.png",i);
      s->coeur1[i]=IMG_Load(vie);
}}
void affichage_score0(score *s,SDL_Surface *ecran,int *i)
{

if (*i>50)
*i=0;
        SDL_BlitSurface(s->coeur1[*i],NULL,ecran,&s->pos1);
	SDL_BlitSurface(s->coeur1[*i],NULL,ecran,&s->pos2);
	SDL_BlitSurface(s->coeur1[*i],NULL,ecran,&s->pos3);
(*i)++;

       SDL_Delay(15);
	//SDL_Flip(ecran);


}
void affichage_score1(score *s,SDL_Surface *ecran,int *i)
{

if (*i>50)
*i=0;  
	SDL_BlitSurface(s->coeur1[*i],NULL,ecran,&s->pos1);
	SDL_BlitSurface(s->coeur1[*i],NULL,ecran,&s->pos2);
	
(*i)++;
       SDL_Delay(15);
     	
}
void affichage_score2(score *s,SDL_Surface *ecran,int *i)
{
if (*i>50)
*i=0;	  
	SDL_BlitSurface(s->coeur1[*i],NULL,ecran,&s->pos3);
(*i)++;
       SDL_Delay(15);
    	
}
void free_score(score *s)
{int i;
      for(i=0;i<3;i++){

	SDL_FreeSurface(s->coeur1[i]);	
	}
}
