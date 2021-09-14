#include<stdio.h>
#define NUM 4

struct Student{
    char name[10];
    int english, math, japanese;
    double ave;
};

int main(void){
    int i;
        
    struct Student data[] = { {"Jack", 82, 72, 58},
                              {"Tom", 77, 82, 79}, 
                              {"Rose", 52, 62, 39},
                              {"Jim", 61, 82, 88} };
        
    double ave_english, ave_math, ave_japanese;
    ave_english = ave_math = ave_japanese = 0;
        
    
    for(i = 0; i < NUM; i++){
        ave_english += data[i].english;
        ave_math += data[i].math;
        ave_japanese += data[i].japanese;
        }
    
    ave_english /= NUM;
    ave_math /= NUM;
    ave_japanese /= NUM;
        
    for(i = 0; i<NUM;i++){
        data[i].ave = (data[i].english + data[i].math + data[i].japanese) / 3.0;
        printf("%10s: English= %3d Math= %3d Japanese= %3d: Average= %6.2f\n",data[i].name, data[i].english, data[i].math, data[i].japanese, data[i].ave);
        }
        
    printf("----------------------------------------------------------------\n");
    printf("Average: English= %5.1f Math= %5.1f Japanese= %5.1f\n", ave_english, ave_math, ave_japanese);
    return 0;       
        
}