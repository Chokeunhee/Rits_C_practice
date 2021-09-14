#include <stdio.h>

int main() {

    int i, n, sum = 0;
    int target = 47;
    int hit = 0;

    for( i=1; i<=10; i++ ) {
        printf( "please input an integer (range: from 1 to 9 ). This is No.%2d time:", i );
		
		scanf("%d", &n);
		
		if( n>=10 || n<=0 )continue ;
		
		sum += n;
		printf("%d\n",sum );
		
		if( sum == target ) {
			hit = 1;
			break;
		}

		if( sum > target ) break;
	}

	if( hit== 1 ) printf( "It was No. %d time! \n\n", i );
	else if( sum < target ) printf("The total (%d) is less than the set number. \n\n", i);
	else printf( "The total (%d) is more than the set number. \n\n", i);
	
	return 0;
}