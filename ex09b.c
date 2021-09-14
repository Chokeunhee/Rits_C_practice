# include <stdio.h>

void swap (int *px, int *py) {
/*              */    

    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
/*              */    

}

void sort3 (int *n1, int *n2, int *n3) {
/*              */    
    if (*n1 > *n2)
    swap(n1, n2);
    
    if (*n1 > *n3)
    swap(n1, n3); 
    
    if (*n2 > *n3)
    swap(n2, n3);
/*              */    

}

int main (void){
    int na, nb, nc;
    printf ("Please input three integers.\n");
    printf ("Integer A: "); scanf ("%d", &na);
    printf ("Integer B: "); scanf ("%d", &nb);
    printf ("Integer C: "); scanf ("%d", &nc);
    
    sort3 (&na, &nb, &nc);
    printf("After swapping.\n");
    printf ("Integer A: %d \n", na);
    printf ("Integer B: %d \n", nb);
    printf ("Integer C: %d \n", nc);
    
    return 0;
}