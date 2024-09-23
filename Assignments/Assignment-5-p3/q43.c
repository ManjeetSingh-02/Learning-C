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

    printf("Decimal is: %d", ans) ;

    return 0 ;
}