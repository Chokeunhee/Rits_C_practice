#include <stdio.h>

int main(){

    int matrix[5][5]={{1,1,1,1,1},{0,1,1,1,1},{0,0,1,1,1},{0,0,0,1,1},{0,0,0,0,1}}, n;

    printf("Please input a number to change the matrix (0,1,-1) :");
    scanf("%d",&n);

    if(n==1){

        for (int j = 4; j >= 0; --j)
        {
            for (int i = 0; i < 5; ++i)
            {
                printf("%2d",matrix[i][j]);
            }
            printf("\n");
        }

    }
    else if(n==0){

        for (int i = 4; i >= 0; --i)
        {
            for (int j = 0; j < 5; ++j)
            {
                printf("%2d",matrix[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("ERROR\n");
    }

    return 0;

}