#include "map.h"
#include "player.h"

void initialisermap(map *map)
{	
	map->image= SDL_LoadBMP("map.bmp");
	map->position.x = 0;
        map->position.y = 0;
	
}

void affichermap(map *map,SDL_Rect camera,SDL_Surface *ecran)
{
SDL_BlitSurface(map->image,&camera, ecran,&map->position);
}
