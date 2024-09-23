#include <stdio.h>
#include <math.h>

int main() {

    int i , arr[4] , ans = 0 , oct , x ;

    printf("Enter octal number: ") ;
    scanf("%d", &oct) ;

    i = 0 ;
    while(oct > 0) {
        x = oct % 10 ;
        ans = ans + (x * pow(8 , i)) ;
        oct = oct / 10 ;
        i++ ;
    }

    i = 1 ;
    x = 0 ;
    
    while(ans > 0) {
        x = x + (ans % 2) * i ;
        ans = ans / 2 ;
        i = i * 10 ;
    }

    printf("Binary is: %d", x) ;

    return 0 ;
}