#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct point
{
	int x;
	int y;
	
};

int main(int argc, const char *argv[])
{
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("intput p1 coordinate(x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("intput p2 coordinate(x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xdiff = p2.x-p1.x;
	ydiff = p2.y-p1.y;
	
	dist = sqrt(xdiff*xdiff + ydiff*ydiff);

	printf("distance between p1, p2: %f", dist);

	return 0;
}

