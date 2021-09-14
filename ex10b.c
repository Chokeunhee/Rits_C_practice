# include <stdio.h>

const char *str_chr (const char *s, int c) {
    
    while((*s) != '\0'){
    
        if((*s) == c)
    
            return s;
    
        s++;
    
    }    
    return NULL;
}



int main (void){

    char str[256];
    char ch[10];
    const char *p;
    
    printf ("Please input a string: ");
    scanf ("%s", str);
    
    printf ("Please input the character: ");
    scanf ("%s", ch);
    
    p = str_chr(str, ch[0]);
    
    if (p == NULL) printf("The string doesn’t include the character. \n");
    else printf("The rest part of the string is %s \n", p);
    return 0;
}