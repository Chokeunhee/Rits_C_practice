#include <stdio.h>

int main(){

	double x , y, area;

	printf("Please input the length of bottem edge and the height of the triangle: ");
	scanf("%lf %lf",&x,&y);

	area = x * y / 2.0;

	printf("The area of the triangle is %f cm\n",area);
	return 0;
}