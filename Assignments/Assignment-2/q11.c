#include <stdio.h>

int main() {

    int a , ans , sum = 0 , diff = 0 , count = 1 ;

    printf("Enter a 5-digit Number: ") ;
    scanf("%d", &a) ;

    diff = a % 10 ;

    while (a > 0) {
        ans = a % 10 ;
        sum = sum + ans ;
        if (count > 1) {
            diff = diff - ans ;
        }
        a = a / 10 ;
        count++ ;
    }

    printf("Sum is %d\n", sum) ;
    printf("Difference is %d", diff) ;

    return 0 ;
}