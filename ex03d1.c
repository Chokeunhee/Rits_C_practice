#include <stdio.h>

int main(){

	int x, y, z;

	printf("Please input two integers, the dividend and divisor :");
	scanf("%d %d",&x ,&y);
	z = x-x/y*y;

	printf("The remainder is: %d\n", z); 
	return 0;
}