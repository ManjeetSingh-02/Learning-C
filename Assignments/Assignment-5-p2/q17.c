#include <stdio.h>

int main() {
	
    int a , b , ans = 0 , x ;
    
    printf("Enter any Number: ") ;
    scanf("%d", &a) ;
    
    b = a ;
    
    while (a > 0) {
        x = a % 10 ;
        ans = (ans * 10) + x ;
        a = a / 10 ;
    }
    
    if (ans == b) {
    	printf("It's a Palindrome Number") ;
	}
	else {
		printf("It's not a Palindrome Number") ;
	}
    
    return 0 ;
}
