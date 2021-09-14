#include <stdio.h>

int main(){
    
    int i, x=0, y=0, z=0;
    int num[100], odd[100], even[100];
    
    for (int i=0; i<100; i++)
    {
        scanf("%d", &num[i]);
        z += 1;
        if (num[i]==0)
        {
            break;
        }
    }
    
    for (int i = 0; i < z; i++)
    {
        if (num[i]>0 && num[i]%2 != 0){
            odd[x] = num[i];
            x++;
        }else if (num[i]>0 && num[i]%2 == 0) {
            even[y] = num[i];
            y++;
        }
    }
    
    if (x==y){
        printf("The number of EVENs and ODDs are same\n");
        for (i = 0; i < x; i++)
        {
            printf("%d ", odd[i]);
        }
        printf("\n");
        for (i = 0; i < y; i++)
        {
            printf("%d ", even[i]);
        }
    }else if (x<y){
        printf("There are more EVENs\n");
        for (i = 0; i < y; i++)
        {
            printf("%d ", even[i]);
        }
    }else if (x>y){
        printf("There are more ODDs\n");
        for (i = 0; i < x; i++)
        {
            printf("%d ", odd[i]);
        }
    }
    printf("\n");

    return 0;
}