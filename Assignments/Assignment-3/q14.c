#include <stdio.h>

int main() {

    int a ;

    printf("Enter a Number: ") ;
    scanf("%d", &a) ;

    if (a & 1 == 1) {
        printf("Odd") ;
    }
    else {
        printf("Even") ;
    }

    return 0 ;
}