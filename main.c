#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct tagPoint
{
	int x;
	int y;
	
}point;

double GetDistance(point p1, point p2 );

int main( )
{
	point p1, p2;
	
	printf("intput p1 coordinate(x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("intput p2 coordinate(x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	

	double dDistance = GetDistance( p1, p2 );
	
	printf("distance between p1, p2: %f", dDistance);

	return 0;
}

double GetDistance( const point p1, const point p2 )
{
	return sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
}
