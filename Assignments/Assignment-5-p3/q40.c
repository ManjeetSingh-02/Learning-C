#include <stdio.h>
#include <math.h>


int main() {

    int i , arr[4] , dec = 0 ;

    printf("Enter a Binary Number of 4-bits:\n") ;
    for(i = 0 ; i < 4 ; i++) {
        scanf("%d", &arr[i]) ;
    }

    for(i = 0 ; i < 4 ; i++) {
        dec = dec + (arr[i] * pow(2 , 3-i)) ;
    }

    printf("Decimal is: %d ", dec) ;

    return 0 ;
}