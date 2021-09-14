# include <stdio.h>
# include <string.h>

int main (void){
    char str[128];

    printf("Please input a string: ");
    scanf("%s", str);

    printf("The length of the string \" %s \" is %u. \n", str, strlen(str));
    
    return 0;
}