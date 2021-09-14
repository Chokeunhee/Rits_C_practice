#include <stdio.h>

int main(){
	
	int id, han;

	printf("please input the last three digits of a student's ID(such as 001) ");
	scanf("%d",&id);

	han = id%3;
	switch(han){
		case 1:
			printf("This student will be allocated to class #1\n");
			break;
		case 2:
			printf("This student will be allocated to class #2\n");
			break;
		case 0:
			printf("This student will be allocated to class #3\n");
			break;
	}

	return 0;
}

