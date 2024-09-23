#include <stdio.h>

int main() {

    int a , i = 0 , ans ;

    printf("Enter any Number: ") ;
    scanf("%d", &a) ;

    while (a > 0) {
        ans = a % 10 ;
        a = a / 10 ;
        i++ ;
    }

    printf("No of digits are: %d", i) ;

    return 0 ;
}