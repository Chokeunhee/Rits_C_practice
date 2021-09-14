#include <stdio.h>
int main ( ) {
    int input;
    int count = 0;

    while (1){
        printf ("The number of even inputs is %d. Please input an integer: \n",count);
        scanf ("%d", &input);
        if (input%2 == 0){
                count++;
        }
        if (count == 3) break;
    }
    printf ("The number of even inputs is 3. The loop finished. \n");
    return 0;
}