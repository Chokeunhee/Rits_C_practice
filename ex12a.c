#include <stdio.h>
#define NAME_LEN 64

typedef struct student {
	char n[NAME_LEN];
   	int h;
   	float w;
   	long int s;
   } Student;


void hiroko(Student* std) {
	if (std->h < 180)
		std->h = 180;
	if (std->w > 80.0)
		std->w = 80.0;
}

int main(void){
	
	Student Jack;
   	printf("name:");
   	scanf("%s", Jack.n);
   	
   	printf("height:");
   	scanf("%d", &Jack.h);
   	
   	printf("weight:");
   	scanf("%f", &Jack.w);
   	
   	printf("scholarship:");
   	scanf("%ld", &Jack.s);
   	
   	hiroko(&Jack);
   	
   	printf("name=%s\n", Jack.n);
   	printf("height=%d\n", Jack.h);
   	printf("weight=%.1f\n", Jack.w);
   	printf("Scholarship=%ld\n", Jack.s);
   	
   	return 0;
   
   }