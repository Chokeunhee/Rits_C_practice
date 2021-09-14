#include <stdio.h>

int main(){
	
	double a = 10.0;
	printf("a is %f\n",a);

	a = a + 1/2;
	printf("a is %f after the first operation\n",a);

	a = a + 1.0/2;
	printf("a is %f after the second operation\n",a);


	

	return 0;
}