#include "personnage.h"
#include "map.h"

void initjoueur (joueur *j)
{
    j->position.x =0;
    j->position.y =0 ;
    j->im = IMG_Load("ED.png");
    

}
void afficherjoueur(joueur *j,SDL_Surface *ecran)
{
 SDL_BlitSurface(j->im, NULL, ecran, &j->position);
}
void deplacementjoueur (joueur *j,SDL_Event event,int i)
{
 if (event.type == SDL_KEYDOWN)
 {
   if (event.key.keysym.sym == SDLK_DOWN)
			{
                          j->position.y +=1;
                          
                          
                         
                        }
  else if(event.key.keysym.sym == SDLK_UP)
                        {
                          j->position.y -=1;
                          
              
                        }
  else if(event.key.keysym.sym == SDLK_RIGHT)
                        {
                          j->position.x +=0.5*2;
                          switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           }
                   
                          
                        }
  else if(event.key.keysym.sym == SDLK_LEFT)
                        {
                          j->position.x -=0.5*2;
                          switch(i)
                          {case 1:
                           j->im=IMG_Load("REG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("RED.png");
                            break;
                           }
                        }

 }

}
