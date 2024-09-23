#include <stdio.h>

int main() {
	
    int a , b , ans = 0 , x ;
    
    printf("Enter any Number: ") ;
    scanf("%d", &a) ;
    
    b = a ;
    
    while (a > 0) {
        x = a % 10 ;
        ans = (x * x * x) + ans ;
        a = a / 10 ;
    }
    
    if (ans == b) {
    	printf("It's a Armstrong Number") ;
	}
	else {
		printf("It's not a Armstrong Number") ;
	}
    
    return 0 ;
}
