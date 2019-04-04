#include<stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
int main()

{

    SDL_Surface *texte = NULL;

    SDL_Rect position;
	
    SDL_Event event;
SDL_Surface *ecran;
    TTF_Font *police = NULL;

    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};

    int continuer = 1,zirou=0;

    int tempsActuel = 0, tempsPrecedent = 0, compteur = 10,ok=1;

    char temps[20] = ""; /* Tableau de char suffisamment grand */

char espc='r';
    SDL_Init(SDL_INIT_VIDEO);

    TTF_Init();


    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    SDL_WM_SetCaption("Gestion du texte avec SDL_ttf", NULL);


    /* Chargement de la police */

    police = TTF_OpenFont("angelina.ttf", 65);


    /* Initialisation du temps et du texte */

    tempsActuel = SDL_GetTicks();

    sprintf(temps, "il vous reste : %d", compteur);

    texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche);


    while (continuer)

    {

        SDL_PollEvent(&event);

        switch(event.type)

        {

            case SDL_QUIT:

                continuer = 0;

                break;

        }


        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));


        tempsActuel = SDL_GetTicks();

        if (tempsActuel - tempsPrecedent >= 1000) /* Si 1sec (1000ms) au moins se sont écoulées */

        {

           if (ok==1) {compteur --; 
sprintf(temps, "il vous reste : %d", compteur); }/* On écrit dans la chaîne "temps" le nouveau temps *//* On rajoute 100 ms au compteur */
if (compteur <1) ok=0;
            
if (ok==0)
            sprintf(temps, "gameove%c",espc); /* On écrit dans la chaîne "temps" le nouveau temps */
            SDL_FreeSurface(texte); /* On supprime la surface précédente */

            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); /* On écrit la chaîne temps dans la SDL_Surface */

            tempsPrecedent = tempsActuel; /* On met à jour le tempsPrecedent */

        }
else 
{
SDL_Delay(1000-(tempsActuel - tempsPrecedent));
}

        position.x = 180;

        position.y = 210;

        SDL_BlitSurface(texte, NULL, ecran, &position); /* Blit du texte */

        SDL_Flip(ecran);


    }


    TTF_CloseFont(police);

    TTF_Quit();


    SDL_FreeSurface(texte);

    SDL_Quit();




}
