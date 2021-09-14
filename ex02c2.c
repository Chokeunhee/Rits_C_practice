/*
26001904131 chokeunhee
*/
#include <stdio.h>
int main(){
	int length,width,height,volumn,area;
	printf("Please enter the length: ");
	scanf("%d",&length);
	printf("Please enter the width: ");
	scanf("%d",&width);
	printf("Please enter the height: ");
	scanf("%d",&height);
	volumn = length * width * height;
	area = 2*length*width + 2*length*height + 2*width*height;
	printf("The Volumn = %d\n",volumn);
	printf("The total surface area = %d\n",area);
	return 0;

}