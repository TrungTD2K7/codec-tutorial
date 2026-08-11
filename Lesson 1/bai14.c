#include <stdio.h>
#define PI 3.14159

int main(){
	float r;
	printf("input r = ");
	scanf("%f",&r);
	r = r >= 0? r : 0;
	
	printf("chu vi : %.2f", 2 *PI *r);
	return 0;
}
