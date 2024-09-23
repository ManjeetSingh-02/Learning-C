#include <stdio.h>
#include <math.h>

int main() {
	float side , area , m , h ;
	
	printf("Enter Side Length : ") ;
	scanf("%f", &side) ;
	
	area = (sqrt(3) / 4) * (side * side) ;
	
	printf("Area = %f" , area) ;
	
	return 0 ;
}
