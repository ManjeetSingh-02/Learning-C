#include <stdio.h>

int main() {

    int a ;

    printf("Enter a number: ") ;
    scanf("%d", &a) ;

    switch(a % 2) {
        case 0: printf("%d is even", a) ; break ;
        default: printf("%d is odd", a) ;
    }

    return 0 ;
}