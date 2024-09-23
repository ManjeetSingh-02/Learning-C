#include <stdio.h>

int main() {
	int units ;
	float amount ;
	
	printf("Enter Units : ") ;
	scanf("%d", &units) ;
	
	if (units <= 50) {
		amount = units * 0.50 ;
	}
	else if (units > 50 && units <= 100) {
		amount = units * 0.75 ;
	}
	else if (units > 100 && units <= 200) {
		amount = units * 1.20 ;
	}
	else {
		amount = units * 1.50 ;
	}
	
	printf("Amount = %f" , amount) ;
	
	return 0 ;
}
