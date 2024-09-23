#include <stdio.h>

int main() {

    int a , ans ;

    printf("Enter any Number: ") ;
    scanf("%d", &a) ;

    while (a > 0) {
        ans = a % 10 ;
        printf("%d", ans) ;
        a = a / 10 ;
    }

    return 0 ;
}