#include <stdio.h>

float AVG(int i,float preavg,float n){
	float curavg;
	curavg=((preavg*(i-1))+n)/i;
	return curavg;
}

int main(){
	int i=1;
	float n,avg=1;
	printf("Input #%02d:",i);
	scanf("%f",&n);
	
	while(n != 0){
		avg = AVG(i,avg,n);
		printf("Average #%02d:%.1f\n",i,avg);
		i++;
		printf("Input #%02d:",i);
		scanf("%f",&n);
	}
return 0;
}