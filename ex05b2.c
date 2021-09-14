#include <stdio.h>

int main(){

int scores[7]; 

printf("Please input the scores of seven people:\n");

for(int i=0; i<7; i++){
    scanf("%d",&scores[i]); 
}

for(int i=0; i<7; i++){
    if(scores[i] >= 80){ 
        printf("%d: %d %s\n",i+1,scores[i],"A");
}
    else if(scores[i] >= 65 && scores[i] <= 79){
        printf("%d: %d %s\n",i+1,scores[i],"B");
}
    else if(scores[i] >= 50 && scores[i] <= 64){
    printf("%d: %d %s\n",i+1,scores[i],"C");
}
    else if(scores[i] >= 35 && scores[i] <= 49){
    printf("%d: %d %s\n",i+1,scores[i],"D");
}
    else{
    printf("%d: %d %s\n",i+1,scores[i],"F");
        }
    }
}