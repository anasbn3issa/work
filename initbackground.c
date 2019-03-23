#include "scrolling.h"
SDL_Surface *loading(const char *fic)
{
SDL_Surface *res;
SDL_Surface *tmp=SDL_LoadBMP(fic);
if(tmp==NULL)
{
printf("error %s\n",fic);
exit(-1);
}
res=SDL_DisplayFormat(tmp);
SDL_FreeSurface(tmp);
return res;
}
