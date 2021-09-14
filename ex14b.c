#include <stdio.h>
#include <string.h>

#define NAME_LEN 100

int main(void){
    
    FILE *fp;
    int i;
    char name[NAME_LEN];
    double height;
    double weight;
    
    fp = fopen("hw2.dat", "w");
    
    if(!fp)
        printf("\aThe file \"%s\" doesn't exist. \n", "hw2.dat");
    else {
        for(i=0;;i++){
            int flag;
            printf("Please input the data of the No. %d person (yes, .... 1 / Finished, .... 0) \n", i + 1);
            scanf("%d", &flag);
            if(flag == 0) break;
            
            printf("Name: ");   scanf("%s", name);
            printf("Height: ");  scanf("%lf", &height);
            printf("Weight: ");  scanf("%lf", &weight);
            fprintf(fp, "%s %lf %lf\n", name, height, weight);
        }
    }
    fclose(fp);
    return 0;
}