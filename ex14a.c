#include <stdio.h>

int main(void){
    
    FILE *fp;
    char fname[256];

    printf("File Name: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    
    if(fp == NULL)
        printf("The file \"%s\" doesn't exist.\n", fname);
    
    else{
        printf("The file \"%s\" exists.\n", fname);
        fclose(fp);
    }
    return 0;
}