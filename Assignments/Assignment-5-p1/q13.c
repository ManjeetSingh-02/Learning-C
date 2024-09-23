#include <stdio.h>
#include <math.h>

int main() {
	
    int a , b , c , ans , fd , ld , p ;
    
    printf("Enter a number: ") ;
    scanf("%d", &a) ;
    
    ld = a % 10 ;
    p = log10(a) ;
    c = pow(10 , p) ;
    ans = ld * c ;
    b = a % c ;
    ans = ans + b ;
    ans = ans - ld ;
    b = a / c ;
    ans = ans + b ;
    printf("After Swapping First and Last Digit = %d", ans) ;
    
    return 0 ;
}
