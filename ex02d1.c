/*
26001904131 chokeunhee
*/
#include <stdio.h>
int main(){
	int initial_num, common_diff, num_of_seq, an, Sum;
	
	printf("Please enter the initial number: ");
	scanf("%d",&initial_num);
	
	printf("Please enter the common difference: ");
	scanf("%d",&common_diff);
	
	printf("Please enter the number of sequence: ");
	scanf("%d",&num_of_seq);
	
	an = initial_num + (num_of_seq - 1) * common_diff ;
	Sum = num_of_seq * (initial_num + an) / 2;
	
	printf("The final term is %d\n",an);
	printf("The sum of the sequence is %d\n", Sum);
	return 0;

}