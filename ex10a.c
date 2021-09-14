# include <stdio.h>

int str_chr (const char *s, int ch){
    
    for(int i = 0; s[i] != '\0'; i++){
    
        if(s[i] == ch) return i+1;
    
        }
    
        return -1;
    }


int main (void){
    int idx;
    char str[256];
    char ch[10];
    
    printf ("Please input a string: ");
    scanf ("%s", str);
    
    printf ("Please input the character: ");
    scanf ("%s", ch);
    
    idx = str_chr(str, ch[0]);
    
    if (idx == -1) printf("The string doesn’t include the character. \n");
    else printf("The character is the %d th. character of the string. \n", idx);
    return 0;
}