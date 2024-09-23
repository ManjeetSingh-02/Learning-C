#include <stdio.h>

int main() {
	float a , b , ans ;
	
	printf("Enter Base of Triangle : ") ;
	scanf("%f", &a) ;
	printf("Enter Height of Triangle : ") ;
	scanf("%f", &b) ;
	ans = (a * b * 0.5) ;
	printf("Area = %f \n", ans) ;
}
