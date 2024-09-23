#include <stdio.h>

void main() {
    int distance ;
	float fuel , avg ;
	
	printf("Enter Distance in kms: ") ;
	scanf("%d", &distance) ;
	
	printf("Enter Fuel spent in litres upto 2 decimal places: ") ;
	scanf("%f", &fuel) ;
	
	avg = distance / fuel ;
	
	printf("Average Consumption (km/lit) = %f" , avg) ;
	
	return 0 ;
}