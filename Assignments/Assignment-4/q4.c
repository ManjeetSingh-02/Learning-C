#include <stdio.h>

int main() {

    int a , b ;

    printf("Enter 2 numbers: ") ;
    scanf("%d", &a) ;
    scanf("%d", &b) ;

    switch(a > b) {
        case 1: printf("%d is greater", a) ; break ;
        default: printf("%d is greater", b) ;
    }

    return 0 ;
}