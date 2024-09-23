#include <stdio.h>

int fact(int) ;

int main() {
	
    int a , b , ans = 0 , x , y ;
    
    printf("Enter a num: ") ;
    scanf("%d", &a) ;
    
    b = a ;
    
    while(a > 0) {
    	y = a % 10 ;
    	x = fact(y) ;
    	ans = ans + x ;
    	a = a / 10 ;
	}
	
	if (ans == b) {
		printf("It's a Strong Number") ;
	}
	else {
		printf("It's not a Strong Number") ;
	}
    
    return 0 ;
}

int fact(int n) {
	if (n == 1) {
		return 1 ;
	}
	else {
		return n * fact(n-1) ;
	}
}
