#include <stdio.h>

int main() {

    int i , b , e , ans = 1 ;
    printf("Enter base of a number: ") ;
    scanf("%d", &b) ;
    printf("Enter exponent of a number: ") ;
    scanf("%d", &e) ;

    for(i = 0 ; i < e ; i++) {
        ans = ans * b ;
    }

    printf("%d", ans) ;

    return 0 ;
}
