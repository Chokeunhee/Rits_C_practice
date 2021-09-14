# include <stdio.h>

void adjust_point (int *n) {
/*                        */    
    if(*n < 0) *n = 0;
    if(*n > 100) *n = 100;
/*                        */    

}

int main (void){
    int point;
    printf ("Please input a number to test: ");
    scanf ("%d", &point);

    adjust_point(&point);
    printf("The adjusted point is %d. \n", point);
    return 0;
}