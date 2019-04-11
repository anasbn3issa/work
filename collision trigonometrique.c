#include "col_trigo.h"
#include <math.h>

int collision_trigo(SDL_Rect a,SDL_Rect b )
{

int ra,rb,xb,xa,ya,yb,distance;
ra=(a.w)/2;
xa=(a.x+(a.w/2));
xa=(a.y+(a.h/2));
ra=(a.w)/2;
xa=(a.x+(a.w/2));
xa=(a.y+(a.h/2));
distance=sqrt((xa-xb)*(xa-xb)+( ya+yb)*( ya+yb));
if(distance<=ra+rb)
{
return 1 ;
}
else
{
return 0;
}
}
