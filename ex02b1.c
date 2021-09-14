/*
26001904131 chokeunhee
*/
#include<stdio.h>
int main(){
	int a;
	printf("Please input an integer:");
	scanf("%d", &a);
	printf("The input value is %d. If the integer is divided by 3, the remainder is %d.",a,a%3);
	return 0;
}