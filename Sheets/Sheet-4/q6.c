#include <stdio.h>

void main() {
	int i , a , b ;
	
	printf("Enter first number: ") ;
	scanf("%d", &a) ;
	
	printf("Enter second number: ") ;
	scanf("%d", &b) ;
	
	for(i = 1 ; i <= b ; i++) {
		a++ ;
	}
	
	
	printf("Sum = %d", a) ;
}
