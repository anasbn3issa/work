
#include "player.h"

//#include "collision.h"

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


int collisionjoueur (SDL_Surface* image,joueur *j,int d)
{

SDL_Color p;

float X,Y;
switch (d)
  {
   case 1 : //down
	//le point n 6 du perso ne doit pas toucher le rouge
     X= (j->position.x+j->position.w)/2;
     Y= j->position.x+j->position.h;
     break;
   case 2 ://up
   //le point n 6 du perso ne doit pas toucher le rouge	
     X= (j->position.x+j->position.w)/2;
     Y= j->position.x+j->position.h;
     break;
   case 3 ://right
	//le point n 8 du perso ne doit pas toucher le rouge	
     X= j->position.x +j->position.w;
     Y= j->position.x+((j->position.h)/2);
     break;       
   case 4 :// left
	//le point n 4 du perso ne doit pas toucher le rouge	
     X= j->position.x ;
     Y= j->position.y+((j->position.h)/2) ;
     break;
  }


p=GetPixel (image,X,Y);
if (((p.r==255)&&(p.b==0)&&(p.g==0)))
{printf("0");
	return 1;}
else 
	return 0;
}

void initjoueur (joueur *j)

{
    
    j->position.x =40;//40;
    j->position.y =55;//55 ;
    j->position.h =138;
    j->position.w =478;
     j->im=IMG_Load("EG.png");
}

void afficherjoueur(joueur *j,SDL_Surface *ecran)
{
 SDL_BlitSurface(j->im, NULL, ecran, &j->position);
}


void deplacementjoueur (joueur *j,SDL_Event event,int i,SDL_Surface *surface)
{
int d=0,c=0;
 if (event.type == SDL_KEYDOWN)
 {
   if (event.key.keysym.sym == SDLK_DOWN)
			{
 				d=1;
                           c=collisionjoueur (surface,j,d);		//collisionmap (d,j->position,surface);
                           if (c==0)
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
                   	} //end if
else printf("1");
                          
                          
                         
                        }
  else if(event.key.keysym.sym == SDLK_UP)
                        {
				d=2;
                            c=collisionjoueur (surface,j,d);
                           if (c==0)
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
else printf("rtyuffrtyh.");
                   
                          
              
                        }
  else if(event.key.keysym.sym == SDLK_RIGHT)
                        {
				d=3;
                          c=collisionjoueur (surface,j,d);
                           if (c==0)
                              {
                          j->position.x +=1;
				
                          switch(i)
                          
                          {case 1:
                           j->im=IMG_Load("EG.png");
                           break;
                           case 2:
                           j->im=IMG_Load("ED.png");
                            break;
                           }}else printf("3");
                   
                          
                        }
  else if(event.key.keysym.sym == SDLK_LEFT)
                        {
					d=4;
                          c=collisionjoueur (surface,j,d);
                           if (c==0)
                              {
                          j->position.x -=1;
				
                          switch(i)
                          {case 1:
                           j->im=IMG_Load("RED.png");
                           break;
                           case 2:
                           j->im=IMG_Load("REG.png");
                            break;
                           }}else printf("4");
                        }

 }

}




void afficherjoueur(joueur *j,SDL_Surface *ecran)
{
 SDL_BlitSurface(j->im, NULL, ecran, &j->position);
}



