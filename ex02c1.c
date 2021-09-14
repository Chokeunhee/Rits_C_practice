/*
26001904131 chokeunhee
*/
#include <stdio.h>
int main(){
	int total,average,remainder,a,b,c;
	printf("Enter the first integer: ");
	scanf("%d",&a);
	printf("Enter the second integer: ");
	scanf("%d",&b);
	printf("Enter the third integer: ");
	scanf("%d",&c);
	total = a + b + c;
	average = total/3;
	remainder = total%average;
	printf("Total = %d\n",total);
	printf("Average = %d\n",average);
	printf("Remainder = %d\n",remainder);
	return 0;

}