#include <stdio.h>

int main(){
	int m, n, temp;

	printf("please input m n : ");
	scanf("%d %d",&m,&n);

	while(1){
		
		if(m % n == 0){
			printf("%d %% %d = %d\n",m,n,m%n);
			printf("The greatest common divisor is %d\n",n);
			break;

		}else{
			printf("%d %% %d = %d\n",m,n,m%n);
			temp = n;
			n = m%n;
			m = temp;


		}

	}

	return 0;

}