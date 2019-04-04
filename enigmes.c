#include "enigmes.h"


void init_enigmes(posenigme *pose,enigme *eni )
{
    pose->posS.x=0;
    pose->posS.y=0;
    pose->posQ.x = 0;
    pose->posQ.y = 0;

    eni->E1= IMG_Load("imageenigme/enigme1.png");
    eni->E2= IMG_Load("imageenigme/enigme2.png");
    eni->E3= IMG_Load("imageenigme/enigme3.png");
    eni->E4= IMG_Load("imageenigme/enigme4.png");
    /*eni->E5= IMG_Load("imageenigme/enigme5.png");
    eni->E6= IMG_Load("imageenigme/enigme6.png");
    eni->E7= IMG_Load("imageenigme/enigme7.png");
    eni->E8= IMG_Load("imageenigme/enigme8.png");
    eni->E9= IMG_Load("imageenigme/enigme9.png");
    eni->E10= IMG_Load("imageenigme/enigme10.png");*/
}

void generation_auto(posenigme *pose,enigme *eni, SDL_Surface *ecran,int chamb)
{
    switch (chamb)
    {
    case 0 :
    {
        SDL_BlitSurface(eni->E1, NULL, ecran, &pose->posQ); 
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    case 1 :
    {
        SDL_BlitSurface(eni->E2, NULL, ecran,  &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    case 2 :
    {
        SDL_BlitSurface(eni->E3, NULL, ecran,  &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }
    case 3 :
    {
        SDL_BlitSurface(eni->E4, NULL, ecran,  &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    case 4 :
    {
        SDL_BlitSurface(eni->E5, NULL, ecran,  &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    /*case 5 :
    {
        SDL_BlitSurface(eni->E6, NULL, ecran, &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }


    case 6 :
    {
        SDL_BlitSurface(eni->E7, NULL, ecran, &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    case 7 :
    {
        SDL_BlitSurface(eni->E8, NULL, ecran, &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }
    case 8 :
    {
        SDL_BlitSurface(eni->E9, NULL, ecran, &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }
    case 9 :
    {
        SDL_BlitSurface(eni->E10, NULL, ecran, &pose->posQ);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }*/

    }
}



void init_resolution(enigme *eni)

{
    eni->key= IMG_Load("imageenigme/key.png");
    eni->try1= IMG_Load("imageenigme/try.png");
    eni->try2= IMG_Load("imageenigme/try2.png");
    eni->lose= IMG_Load("imageenigme/lose.png");
}


void resolution_enigmes(posenigme *pose,enigme *eni, SDL_Surface *ecran, joueur *j,int *mistake)
{
SDL_Event event;
int continuer=1;
while (continuer)
    { 
       SDL_PollEvent(&event);
	switch(event.type)
            {
		case SDL_QUIT: 
		continuer = 0;
		break;

		case SDL_MOUSEBUTTONDOWN:
                if (event.button.button == SDL_BUTTON_LEFT)
                {
                    if(event.button.x>30 && event.button.x<=207 && event.button.y>=532 && event.button.y <=570)
                    {
                        SDL_BlitSurface(eni->key, NULL, ecran, &pose->posS);
                        SDL_Flip(ecran);SDL_Delay(500);

                      continuer=0;
			break;

                    }

                    else if((*mistake)==0&&event.button.x>591 && event.button.x<=767&& event.button.y>=530 && event.button.y <=566)
                    {
                        SDL_BlitSurface(eni->try1, NULL, ecran, &pose->posS);
                        SDL_Flip(ecran);SDL_Delay(500);continuer=0;
			(*mistake)++;
			break;
                    }
		    else if((*mistake)==1&&event.button.x>591 && event.button.x<=767&& event.button.y>=530 && event.button.y <=566)
                    {
                        SDL_BlitSurface(eni->lose, NULL, ecran, &pose->posS);
                        SDL_Flip(ecran);SDL_Delay(500);continuer=0;
			(*mistake)=0;
			break;

                    }
		   
                }
                break;

         
	    } //end switch event.type

    } //end while continuer


} //end func
