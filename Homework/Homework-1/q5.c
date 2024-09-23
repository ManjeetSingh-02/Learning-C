#include <stdio.h>

int main() {

    int a ;

    printf("Enter a  Number : ") ;
    scanf("%d", &a) ;

    if (a > 0) {
        printf("Positive") ;
    }
    else {
        printf("Negative") ;
    }

    return 0 ;
}