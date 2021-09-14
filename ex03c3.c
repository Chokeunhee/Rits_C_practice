#include <stdio.h>

int main(){

	double w1,w2,w3,w4,w5,sum,aver;

	printf("Please input the weight of five people : ");
	scanf("%lf %lf %lf %lf %lf",&w1,&w2,&w3,&w4,&w5);

	sum = w1+w2+w3+w4+w5;
	aver = sum / 5;

	printf("The average of the weight is: %.1f[kg]\n",aver);
	printf("The weight of the first person is: %.1f[kg], the difference between his weight and the average is: %+.1f[kg]\n",w1,w1-aver);
	printf("The weight of the second person is: %.1f[kg], the difference between his weight and the average is: %+.1f[kg]\n",w2,w2-aver);
	printf("The weight of the third person is: %.1f[kg], the difference between his weight and the average is: %+.1f[kg]\n",w3,w3-aver);
	printf("The weight of the fourth person is: %.1f[kg], the difference between his weight and the average is: %+.1f[kg]\n",w4,w4-aver);
	printf("The weight of the fifth person is: %.1f[kg], the difference between his weight and the average is: %+.1f[kg]\n",w5,w5-aver);

	return 0;

}