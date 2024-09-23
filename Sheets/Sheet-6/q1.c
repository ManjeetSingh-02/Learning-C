#include <stdio.h>

int main() {
	int a , b , c ;
	
	printf("Enter Num 1 : ") ;
	scanf("%d", &a) ;
	
	printf("Enter Num 2 : ") ;
	scanf("%d", &b) ;
	
	printf("Enter Num 3 : ") ;
	scanf("%d", &c) ;
	
	if (a > b && a > c) {
		printf("%d is greatest", a) ;
	}
	else if (b > a && b > c) {
		printf("%d is greatest", b) ;
	}
	else {
		printf("%d is greatest", c) ;
	}
	
	return 0 ;
}
