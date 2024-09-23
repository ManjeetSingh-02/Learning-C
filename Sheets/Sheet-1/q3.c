#include <stdio.h>
int main() {
	
	float r , v  , pie = 3.14F ;
	
	printf("Enter Radius : ") ;
	scanf("%f", &r) ;
	v = ((float)(4)/3) * pie * (r * r * r) ;
	printf("Vloume - %f", v) ;
	return 0 ;
}