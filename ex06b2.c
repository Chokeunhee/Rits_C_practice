#include <stdio.h>
#define ROW 5
#define COL 2 

int main(){

    int data[ROW][COL];
    int MaxX, MaxY, X, Y;

    for (int i = 0; i < ROW; ++i)
    {
        printf("Please input the No.%d point :",i+1);
        scanf("%d %d",&data[i][0],&data[i][1]);
    }

    MaxX = data[0][0];
    MaxY = data[0][1];

//Finding the Max X and Y

    for (int i = 0; i < ROW; ++i)
    {
        if (data[i][0] >= MaxX)
        {
            MaxX = data[i][0];
        }
    }

    for (int i = 0; i < ROW; ++i)
    {
        if (data[i][1] >= MaxY)
        {
            MaxY = data[i][1];
        }
    }    


//Printing the Max Xs and Ys

    for (int i = 0; i < ROW; ++i)
    {
        if (data[i][0] == MaxX)
        {
            printf("The point which has the largest x value is : (%d %d)\n",data[i][0],data[i][1]);
        }
    }

    for (int i = 0; i < ROW; ++i)
    {
        if (data[i][1] == MaxY)
        {
            printf("The point which has the largest y value is : (%d %d)\n",data[i][0],data[i][1]);
        }
    } 

    return 0;       

}