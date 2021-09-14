#include <stdio.h> 

struct xyz{
	int x;
	long y;
	double z;
	}s;


struct xyz scan_xyz(){
	struct xyz XYZ;
	printf("The value of x is: "); scanf("%d",&XYZ.x);
	printf("The value of y is: "); scanf("%ld",&XYZ.y);
	printf("The value of z is: "); scanf("%lf",&XYZ.z);
	return XYZ;
}


int main(){
	struct xyz s;
	s = scan_xyz(); 
	printf("s.x = %d\n",s.x); 
	printf("s.y = %ld\n",s.y); 
	printf("s.z = %lf\n",s.z);
	return 0;
}