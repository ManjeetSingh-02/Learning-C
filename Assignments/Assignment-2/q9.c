#include <stdio.h>

int main() {

    int a , b , ans ;

    printf("Enter 2 Numbers: ") ;
    scanf("%d", &a) ;
    scanf("%d", &b) ;

    ans = a && b ? 1 : 0 ;
    printf("%d", ans) ;
    ans = a || b ? 1 : 0 ;
    printf("%d", ans) ;
    ans = !a ? 1 : 0 ;
    printf("%d", ans) ;
    
    return 0 ;
}