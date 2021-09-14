# include <stdio.h>
# include <ctype.h>

void str_toupper(char *s){
    int x = 0;
    while(s[x] != '\0'){
        if(s[x] >= 'a' && s[x] <= 'z'){
            s[x] = s[x] - 32;
        }
        ++x;
    }
}


void str_tolower(char *s) {
    int X = 0;
    while(s[X] != '\0'){
        if(s[X] >= 'A' && s[X] <= 'Z'){
            s[X] = s[X] + 32;
        }
        ++X;
    }
}


int main (void){

    char str[128];
    
    printf ("Please input a string: ");
    scanf ("%s",str);
    
    str_toupper(str);
    printf ("Capital: %s\n", str);
    
    str_tolower(str);
    printf ("Lower case: %s\n", str);
    
    return 0;
}