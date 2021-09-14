#include <stdio.h>


int main(){

	int matrix[3][3], matrix2[3][3], n, N;

	n = 1;

	printf("The original matrix\n");

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			matrix[i][j] = n;
			n++;
			printf("%2d",matrix[i][j]);	
		}
		printf("\n");

	}

	printf("Please input an integer : ");
	scanf("%d",&N);

	if(N<1||N>20){
		printf("Out of range (1,20)");
	}
	else{
		printf("The new matrix\n");
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				matrix2[i][j] = matrix[i][j] * N;
				printf("%5d",matrix2[i][j]);	
			}
			printf("\n\n");
		}

	}

	return 0;
}