#include <stdio.h>

int main() {

    int a , ans , sum = 0 , diff = 0 , count = 1 , digit = 1 ;

    printf("Enter a 5-digit Number: ") ;
    scanf("%d", &a) ;

    diff = a % 10 ;

    while (a > 0) {
        ans = a % 10 ;
        if (digit == 1 || digit == 3 || digit == 5) {
            sum = sum + ans ;
            if (count > 1) {
                diff = diff - ans ;
            }
            count++ ;
        }
        a = a / 10 ;
        digit++ ;
    }

    printf("Sum is %d\n", sum) ;
    printf("Difference is %d", diff) ;

    return 0 ;
}