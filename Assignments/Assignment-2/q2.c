#include <stdio.h>

int main() {

    int a , b , c , ans ;

    printf("Enter 3 Numbers :") ;
    scanf("%d", &a) ;
    scanf("%d", &b) ;
    scanf("%d", &c) ;

    ans = a > b ? a > c ? a : c : c > b ? c : b ;

    printf("%d is greatest", ans) ;

    return 0 ;
}