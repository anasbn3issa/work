
#include "player.h"



SDL_Color GetPixel ( SDL_Surface* pSurface , int x , int y)
{
 SDL_Color color;
 Uint32 col = 0;
 char *pPosition = (char *) pSurface ->pixels;
 pPosition += (pSurface ->pitch * y);
 pPosition += (pSurface->format->BytesPerPixel * x);
 memcpy (&col ,pPosition , pSurface->format->BytesPerPixel);
 SDL_GetRGB(col ,pSurface->format , &color.r , &color.g , &color.b);
 return (color) ;
}



int collisionjoueur(SDL_Surface *image,joueur *j, int d)
{ SDL_Color color[3];
int i;
switch(d)
{
case 1: //droite
  color [0] = GetPixel (image, j->position.x +j->position.w, j->position.y);
  color [1] = GetPixel (image, j->position.x +j->position.w, j->position.y +j->position.h /2);
  color [2] = GetPixel (image, j->position.x +j->position.w, j->position.y +j->position.h);
break;
case 2://bas
  color [0] = GetPixel (image,j->position.x, j->position.y +j->position.h);
  color [1] = GetPixel (image, j->position.x +j->position.w /2, j->position.y+j->position.h);
  color [2] = GetPixel (image, j->position.x +j->position.w, j->position.y +j->position.h);
break;
case 3://haut
  color [0] = GetPixel (image, j->position.x, j->position.y);
  color [1] = GetPixel (image, (j->position.x+j->position.w) /2, j->position.y);
  color [2] = GetPixel (image, j->position.x +j->position.w, j->position.y);
break;
case 4: //gauche
  color [0] = GetPixel (image, j->position.x, j->position.y);
  color [3] = GetPixel (image, j->position.x, j->position.y +j->position.h /2);
  color [4] = GetPixel (image, j->position.x, j->position.y +j->position.h);
break;

}

for(i=0;i<3;i++)
{
if ((color[i].r==255 && color[i].g==0 && color[i].b==0)) return 1; else return 0;
}
}


void initjoueur (joueur *j)

{
    
    j->position.x =40;//40;
    j->position.y =60;//55 ;
    j->position.h =115;
    j->position.w =400;
     j->im=IMG_Load("EG.png");
}

void afficherjoueur(joueur *j,SDL_Surface *ecran)
{
 SDL_BlitSurface(j->im, NULL, ecran, &j->position);
}


void deplacementjoueur (joueur *j,SDL_Event event,int i,SDL_Surface *surface)
{
int d=0;
 if (event.type == SDL_KEYDOWN)
 {
   if (event.key.keysym.sym == SDLK_DOWN)
		 {

				
                         d=2;
				if(!collisionjoueur(surface,j,d))
			{
				j->position.y +=1;

 				switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           } 

			} else ("stop down\n");
                          
                         
                 }
  else if(event.key.keysym.sym == SDLK_UP)
                        {
    d=3;
				if(!collisionjoueur(surface,j,d))
				{
                         
				j->position.y -=1;

 				switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           } }

                   
                          
              
                        }
  else if(event.key.keysym.sym == SDLK_RIGHT)
                        {

    d=1;
				if(!collisionjoueur(surface,j,d))				
			{
                          j->position.x +=1;
				
                          switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           }}
                   
                          
                        }
  else if(event.key.keysym.sym == SDLK_LEFT)
                        {
    d=4;
				if(!collisionjoueur(surface,j,d))
				{
                          j->position.x -=1;
				
                          switch(i)
                          {case 1:
                           j->im=IMG_Load("RED.png");
                           break;
                           case 2:
                           j->im=IMG_Load("REG.png");
                            break;
                           }}
                        }

 }

}

