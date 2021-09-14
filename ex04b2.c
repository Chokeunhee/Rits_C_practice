#include <stdio.h>

int main(){

	int Atten_Num;

	while (1){

		printf("Attendance No. is -> ");
		scanf("%d",&Atten_Num);

		if (Atten_Num == 0){
			printf("The program finished\n");
			break;
		}


		if (Atten_Num % 3 == 0){
			printf("This person belongs to Blue team\n");
		} else if (Atten_Num % 3 == 1){
			printf("This person belongs to Red team\n");
		} else{
			printf("This person belongs to White team\n");
		}

	}
}