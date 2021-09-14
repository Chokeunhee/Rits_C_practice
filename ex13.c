#include <math.h>
#include <stdio.h>

#define sqr(n) ((n)*(n))

typedef struct {
	double x;
	double y;
} Point;

typedef struct {
	Point pt;
	double G;
} Car;

double distance_of(Point pa, Point pb){
	double distance = (sqr(pb.x - pa.x) + sqr(pb.y - pa.y));
	return sqrt(distance);
}

void put_info(Car c){
	printf("The present car position is: (%.2f,%.2f)\n",c.pt.x,c.pt.y);
	printf("The remaining gas is: %2f L\n",c.G);
}

int move(Car *c,Point dest) {
	double d = distance_of(c->pt,dest);
    
    if(c->G > d){
    	c->G -= d;
        c->pt = dest;
        return 1;
    }
    else{
    	return 0;
    }
}

int main(void){
	Car mycar = {{0.0, 0.0}, 90.0}; 
	while(1){
		int select; 
		Point dest; 
		double x, y;
		
		put_info(mycar);
		printf("Shall we start the trip? [1]The coordinate of the destination; [0]Finish."); 
		scanf ("%d", &select);
		if (select != 1) break;
		printf("X for the destination is: "); scanf("%lf",&dest.x);
		printf("Y for the destination is: "); scanf("%lf",&dest.y);
		if (! move(&mycar, dest))
			printf("There is not enough gas left.");
	}
	return 0; 
}






