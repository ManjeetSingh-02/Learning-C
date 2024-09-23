#include <stdio.h>
#include <stdlib.h>

void main() {
	int p , t ;
	float r  , ci ;
	printf("Input the Amount: ") ;
	scanf("%d", &p) ;
	printf("Input the Time: ") ;
	scanf("%d", &t) ;
	printf("Input the Rate: ") ;
	scanf("%f", &r) ;
	
	ci = (1 + (r/100)) ;
	ci = pow(ci , t) ;
	ci = ci * p ;
	
	printf("Compound Interest: %f", ci) ;
	return 0 ;
}
