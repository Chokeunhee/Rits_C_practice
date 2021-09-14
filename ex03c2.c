#include <stdio.h>

int main(){

	double sj, wvj, sm, wvm, se, wve, sp, wvp, sh, wvh, Sum, Aver;
	
	printf("Please input the score and weight value of Japanese:");
	scanf("%lf %lf",&sj,&wvj);

	printf("Please input the score and weight value of Math:");
	scanf("%lf %lf",&sm,&wvm);
	
	printf("Please input the score and weight value of English:");
	scanf("%lf %lf",&se,&wve);
	
	printf("Please input the score and weight value of Physics:");
	scanf("%lf %lf",&sp,&wvp);
	
	printf("Please input the score and weight value of History:");
	scanf("%lf %lf",&sh,&wvh);

	Sum = (sj*wvj)+(sm*wvm)+(se*wve)+(sp*wvp)+(sh*wvh);
	Aver = Sum / (wvj+wvm+wve+wvp+wvh);

	printf("The average of the score of those subject are %f\n",Aver); 

	return 0;

}