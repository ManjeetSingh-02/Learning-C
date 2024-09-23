#include <stdio.h>

int main() {

    int a , ans ;

    printf("Enter a  Number :") ;
    scanf("%d", &a) ;

    ans = a % 2 == 0 ? printf("%d is even", a) : printf("%d is odd", a) ;

    return 0 ;
}