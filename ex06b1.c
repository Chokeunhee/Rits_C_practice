#include <stdio.h>

int main(){
	
	int matrix[3][4];
	double avg = 0;
	double totalavg = 0;

	printf("Please input the matrix data : \n");

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Data and average : \n");

    for (int i = 0; i < 3; i++)

    {

    	avg = 0;

        for (int j = 0; j < 4; j++)

        {

            printf("%5d", matrix[i][j]);

            avg += matrix[i][j];

        }

        avg /= 4;

        printf("%5.2f\n", avg);

        totalavg += avg;

        printf("\n");

    }

    for (int i = 0; i < 4; i++)

    {

        avg = 0;

        for (int j = 0; j < 3; j++)

            avg += matrix[j][i];

        avg /= 3;

        printf("%5.2f", avg);

    }

    printf("%5.2f\n", totalavg / 3);


    return 0;

}