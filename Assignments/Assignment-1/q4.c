#include <stdio.h>

void main() {
	float radius , pie = 3.14F , volume ;
	printf("Input the Radius of Sphere: ") ;
	scanf("%f", &radius) ;
	
	volume = ((float)4/3) * pie * (radius * radius * radius) ;
	
	printf("The Volume of Sphere is: %f", volume) ;
	return 0 ;
}
