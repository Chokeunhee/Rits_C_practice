#include <stdio.h>
int main ( ){
    int humidity, index;

    printf ("please input the humidity ");
    scanf ("%d",&humidity);
    printf ("the humidity is %d\n", humidity);
    
    index = humidity / 10;

    switch (index){
        case 0:
        case 1:
        case 2:
            printf("Dry\n");
            break;
        case 3:
        case 4:
            printf("A little bit dry\n");
            break;
        case 5:
        case 6:
            printf("Just right\n");
            break;
        case 7:
            printf("Humite\n");
            break;
        case 8:
        case 9:
            printf("Too humuite\n");
            break;

        default:
                printf("Impossible value\n");
    }
    return 0;
}