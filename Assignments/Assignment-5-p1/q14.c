#include <stdio.h>

int main() {

    int a , ans , sum = 0 ;

    printf("Enter any Number: ") ;
    scanf("%d", &a) ;

    while (a > 0) {
        ans = a % 10 ;
        sum = sum + ans ;
        a = a / 10 ;
    }

    printf("Sum of digits is: %d", sum) ;

    return 0 ;
}