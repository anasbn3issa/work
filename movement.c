void move(SDL_Event event,SDL_Surface *screen,*background,*image2,SDL_Rect position2,backgroundposition)
{
int done=1;
while(done)
{
    SDL_BlitSurface(background,NULL,screen,&backgroundposition);
    SDL_BlitSurface(image2,&backgroundposition,screen,&position2);
    SDL_WaitEvent(&event);
switch(event.type)
{
case SDL_QUIT:
done = 0;
break;
case SDL_KEYDOWN:
{
switch(event.key.keysym.sym)
{
case SDLK_ESCAPE:
done=0;
break;
case SDLK_UP:
position2.y-=3.5;
break;
case SDLK_DOWN:
position2.y+=3.5;
break;
case SDLK_RIGHT:
position2.x+=3.5;
break;
case SDLK_LEFT:
position2.x-=3.5;
break;
}
}
}
SDL_Flip(ecran);
}
}
