#include <stdio.h>

int main() {

    int a , b , c , sum ;
    printf("Enter all 3 angles of a triangle: ") ;
    scanf("%d %d %d", &a , &b , &c) ;

    sum = a + b + c ;

    if (sum <= 180) {
        printf("Valid") ;
    }
    else {
        printf("Invalid") ;
    }

    return 0 ;
}