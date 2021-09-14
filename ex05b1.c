#include <stdio.h>

int main(){
    
    int x, num, f = 1;
    
    
    printf("The number is : ");
    scanf("%d", &num);

    if (num>=13){
        printf("it is difficult to calculate it!\n");
    }else{
        for (x = 1; x <= num; x++){
            f = f * x;
    }
    printf("The factorial of the number is %d\n", f);
    }

    return 0;
}
