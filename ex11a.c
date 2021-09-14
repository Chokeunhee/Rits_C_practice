#include<stdio.h>
#define NAME_LEN 64

typedef struct student {
        char name[NAME_LEN];
        int height;
        double weight;
        int scholarship;
}Student;

int main(void)
{
        Student s = {"Tony", 170, 73.4, 0};

        printf("Name = %s %p\n",s.name,&s.name);
        printf("Height = %d %p\n",s.height,&s.height);
        printf("Weight = %.1f %p\n",s.weight,&s.weight);
        printf("Scholarship = %1d %p\n",s.scholarship,&s.scholarship);

        return 0;
}