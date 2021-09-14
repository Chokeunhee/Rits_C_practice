#include <stdio.h> 
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
	char n[NAME_LEN];
	int h;
	float w;
	long s;
} Student;

void swap_Student (Student*x,Student*y){
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height (Student a[], int n) {
	int x;
	int i, j;
	for(i=0; i<n; i++){
		x = i;
		for(j=i+1; j<n; j++){
			if(a[j].h > a[x].h) 
			// when tall to short >, when short to tall < The assignment did not memntion which way so I assumed it to be tall to short
				x = j;
		}

		if(i!=x)
			swap_Student(&a[i],&a[x]);
	}
} 

void sort_by_name (Student a[], int n) {
	int x;
   	int i, j;
   	for(i = 0; i < n; i++){
   		x = i;
        for(j = i+1; j < n; j++){
            if(strcmp(a[j].n, a[x].n) < 0)
            	x = j;
        }
      
       if(i != x)
           swap_Student(&a[i], &a[x]);
   }
}
 

int main (void){
	int i, sort_type;
	Student std[5];
	
	for (i = 0; i < NUMBER; i++){
		
		printf("The %d th. student: \n", i +1);
		printf("Name: ");
		scanf("%s", std[i].n);

		printf("Height:");
		scanf("%d", &std[i].h); 

		printf("Weight:");
		scanf("%f", &std[i].w);

		printf("Scholarship: "); 
		scanf("%ld", &std[i].s);
	}

	printf("How do you want to sort students: [0] based on height ? [1] based on name ?"); 
	scanf ("%d", &sort_type);
	
	switch (sort_type){ 
			case 0:
				sort_by_height(std,NUMBER);
				break;
			case 1:
				sort_by_name(std,NUMBER);
				break;
	}
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",std[i].n, std[i].h, std[i].w, std[i].s); 

	return 0;
}