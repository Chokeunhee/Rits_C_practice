#include <stdio.h>

int main(){

	double b, x, y, h;
	printf("Please input the weight(kg) and height(cm) of a person:");
	scanf("%lf %lf",&x,&y);
	
	h = y/100;
	b = x / (h * h);

	printf("BMI of the person is: %f.\n",b);

	return 0;


}