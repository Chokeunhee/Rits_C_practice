#include <stdio.h>

int main(){
    
    int a, i, j;
    
    printf("Please input an integer(range from 1 to 9): ");
    scanf("%d",&a);
    
    if(a<1||a>9){
      
        printf("The input range is from 1 to 9\n");
    
    }else{
    
        for(i=1; i <= 2*a-1; i++){

            if(i<=a){

                for(j=1; j<=i; j++){
                    printf("%d",i);
                }
            }else{
                for(j=i; j<=2*a-1; j++){
                    printf("%d",2*a-i);
                }
            }
            
            printf("\n");
        }
    }
    
    return 0;
}