#include <stdio.h>

int main() {

    int a , b , ans ;

    printf("Enter 2 Numbers :") ;
    scanf("%d", &a) ;
    scanf("%d", &b) ;

    ans = a > b ? a : b ;

    printf("%d is greatest", ans) ;

    return 0 ;
}