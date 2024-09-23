#include <stdio.h>

void main() {
    int x , y ;

    printf("Enter 1st Number less than 100: ") ;
    scanf("%d", &x) ;
    printf("Enter 2nd Number less than 100: ") ;
    scanf("%d", &y) ;
    printf("Before Swapping , X is %d and Y is %d", x , y) ;

    x = x + y ;
    y = x - y ;
    x = x - y ;

    printf("\nAfter Swapping , X is %d and Y is %d", x , y) ;
	
	return 0 ;
}