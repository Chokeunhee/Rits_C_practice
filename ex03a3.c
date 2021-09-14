#include <stdio.h>

int main(){

	double x = 31.4;
	int i = 29;

	printf("The number of credits is %05d.\n",i);
	printf("The number of credits is %5d.\n",i);
	printf("The number of credits is %-5d.\n",i);
	printf("The number of credits is %+5d.\n",i);
	printf("The total score is %.3f.\n",x);
	printf("The total score is %f.\n",x);
	printf("The total score is %e.\n",x);
	printf("The total score is %.2E.\n",x);

	return 0;
}