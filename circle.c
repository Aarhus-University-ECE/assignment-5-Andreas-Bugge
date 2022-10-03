#include <malloc.h>
#include "circle.h"

void fiveCircles(circle c[])
{ //en tæller til hvert a cirklens punkter
	for (int i = 0; i < 5; ++i)
	{
		c[i].p.x = i;
		c[i].p.y = i;
		c[i].r = i;
	}
}
int circleIsValid(const circle *c) 
{ //En checker for at se om cirklen overhoved er mulig
	if (c > 0)
		return 1;
	else
		return 0;
}

void translate(circle *c, const point *p)
{ // Sammensætter 2 koordinater
	c->p.x + p->x;
	c->p.y + p->y;
}
