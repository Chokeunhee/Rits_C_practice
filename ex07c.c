#include <stdio.h>

int isprime(int);

int isprime(int n){
   
   int i,x=0;
   
   for(i = 1;i <= n;i++){
       if(n%i==0){
           x++; 
       }
   }
   if(x == 2) 
       return 1;
   else
       return 0;
}

int main(){
   int i,linenum=1;
   
   for(i = 1;i <= 1000;i++){
       
       if(isprime(i)){
           printf("%3d\t",i); 
           
           if(linenum%10 == 0)
               printf("\n"); 
           linenum++;
       }
   }
   printf("\n");
   return 0;
}


