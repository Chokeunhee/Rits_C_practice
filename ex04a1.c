#include <stdio.h>

int main(){

	int score;

	printf("Please input your score : ");
	scanf("%d",&score);

	printf("Based on Method 1\n");

	if (score >= 50){
		printf("pass\n");
	}
	if (score < 50){
		printf("fail\n");
	}

	printf("Based on Method 2\n");

	if (score >= 50){
		printf("pass\n");
	}else{
		printf("fail\n");
	}


	return 0;

}