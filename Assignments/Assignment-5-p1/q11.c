#include <stdio.h>

int main() {

    int a , ans , x ;

    printf("Enter any Number: ") ;
    scanf("%d", &a) ;

    ans = a % 10 ;

    while (a > 0) {
        x = a % 10 ;
        a = a / 10 ;
    }

    printf("First digit is: %d", x) ;
    printf("\nLast digit is: %d", ans) ;

    return 0 ;
}