# include <stdio.h>

int is_whitespace(int ch){
    return ch == ' '|| ch == '\f ' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v';
}

int stroi (const char *nptr){
    int sign = 1;
    int x = 0;

    while (is_whitespace(*nptr))
            nptr++;
/*                                                           */               
            char *t;
            
            for (t = nptr; *t != '\0'; t++) {

                if (*t == '+') {
                    sign = 1;
                    }

                else if (*t == '-') {
                    sign = 1;
                    }
                    
                else if ((int)*t >= 48 && (int)*t <= 57) {
                    x = x * 10 + (int)*t - 48;
                    }
            }
/*                                                           */    
    return sign * x;
}

int main (void){
    char str[128];
    int i;

    printf("Please input a string: ");
    scanf("%s", str);

    i = stroi (str);

    printf ("The value of integer from the string \"%s\" is %d \n", str, i);

    return 0;
}