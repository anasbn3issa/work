
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
    
    j->position.x =100;//40;
    j->position.y =220;//55 ;
    j->position.h =120;
    j->position.w =37;
     j->im=IMG_Load("EG.png");
}

void afficherjoueur(joueur *j,SDL_Surface *ecran)
{
 SDL_BlitSurface(j->im, NULL, ecran, &j->position);
}

void animation_ennemi (ennemi *e, int d, int i)
{
switch(d)
{case 0: 
		switch(i)
                          
                          {case 1:
                          e->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           e->im=IMG_Load("ED.png");
                            break;
                           } break;
case 1: 
		switch(i)
                          
                          {case 1:
                           e->im=IMG_Load("REG.png");
                           break;
                           case 2:
                           e->im=IMG_Load("RED.png");
                            break;}  break;
}
}

void animation(joueur *j, int d, int i)
{
switch(d)
{case 1: //down
		switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           } break;
case 2: //up
		switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           } break;
case 3: //right
		switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           } break;
case 4://left
		switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("REG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("RED.png");
                            break;
                           } break;
}

}

void deplacementjoueur (joueur *j,SDL_Event event,SDL_Surface *surface,int i)
{
int d=0;
 
if (event.type == SDL_KEYDOWN)
	{
				
		switch (event.key.keysym.sym)

			{
	case SDLK_DOWN: 	
			d=2;
				if(!collisionjoueur(surface,j,d)) 
		{
			j->position.y +=2;
				
			animation(j, d,i);

		}
					 else printf("stop down\n");break;

	case SDLK_UP: 
			d=3;
				if(!collisionjoueur(surface,j,d))
				
		{
			j->position.y -=2;

				 animation(j, d,i);

		} 			else printf("stop up\n"); break;

	case SDLK_RIGHT: 
			 d=1;

				if(!collisionjoueur(surface,j,d))
		{
			j->position.x +=2;
                          
                          animation(j, d,i);

		}
					else printf("stop right\n"); break;

	case SDLK_LEFT :  
			d=4;

			if(!collisionjoueur(surface,j,d))

		{	j->position.x -=2;
				
			animation(j, d,i);

		}			 else printf("stop left\n");break;
}
}}

