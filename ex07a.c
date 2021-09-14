
#include <stdio.h> 
#include <stdlib.h>


#define setsize 20

void Histogram(int number){
        printf("[%d]:",number);  
        while(number--)
        {
                printf("*");
        }
        printf("\n");
}


int main(){
        int num[setsize], c=0;

        do{
                scanf("%d",&num[c]);
                c++;
        }while(c<20 && num[c-1]>=0);

        
        for(int i=0;i<c;i++){
                if(num[i]>=80){
                        printf("illegal value\n");
                        exit(1);
                }
                else if(num[i]>=0)
                        Histogram(num[i]);
        }

        return 0;
}