#include <stdio.h>

int main() {

    int a , ans , prod = 1 ;

    printf("Enter any Number: ") ;
    scanf("%d", &a) ;

    while (a > 0) {
        ans = a % 10 ;
        prod = prod * ans ;
        a = a / 10 ;
    }

    printf("Product of digits is: %d", prod) ;

    return 0 ;
}