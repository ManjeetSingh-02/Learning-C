#include <stdio.h>

void main() {
	int p , t ;
	float r  , si ;
	printf("Input the Amount: ") ;
	scanf("%d", &p) ;
	printf("Input the Time: ") ;
	scanf("%d", &t) ;
	printf("Input the Rate: ") ;
	scanf("%f", &r) ;
	
	si = (p * r * t) / 100 ;
	
	printf("Simple Interest: %f", si) ;
	return 0 ;
}