#include <stdio.h>

int main() {
  
  int X[10]= {10,9,8,7,6,5,4,3,2,1};
  int i;
  
  for(i=0; i<10; i++){
    printf("%d ",X[i]);
  }    
  
  printf("\n");

  for(i=9; i>=0; i--){
    printf("%d ",X[i]);
  } 
  
  return 0;
}