#include <stdio.h>

int main(){

	int a = 6;
	int b = 4;
	double c1,c2,c3;

	c1 = a + b * a;
	c2 = a / b;
	c3 = (double)a/(double)b;

	printf("c1 equals to %f\n",c1);
	printf("c2 equals to %f\n",c2);
	printf("c3 equals to %f\n",c3);

	return 0;
}