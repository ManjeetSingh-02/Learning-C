#include <stdio.h>
#include <math.h>

void main() {
	float side , area ;
	printf("Input the side of equilateral triangle: ") ;
    scanf("%f", &side) ;

    area =  (sqrt(3) / 4) * (side * side) ;
	
	printf("Area of Equilateral Triangle: %.1f sq units", area) ;
	return 0 ;
}