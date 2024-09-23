#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int a ;
	float b ;
	char c ;
	
	printf("Enter Int : ") ;
	scanf("%d", &a) ;
	printf("Enter Float : ") ;
	scanf("%f", &b) ;
	fflush(stdin) ;
	printf("Enter Char : ") ;
	scanf("%c", &c) ;
	
	printf("Int - %d", a) ;
	printf("Float - %f", b) ;
	printf("Char - %c", c) ;
	return 0 ;
}
