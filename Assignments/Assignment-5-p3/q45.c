#include <stdio.h>
#include <math.h>

int main() {

    int i , dec , x ;

    printf("Enter decimal number: ") ;
    scanf("%d", &dec) ;

    i = 1 ;
    x = 0 ;
    
    while(dec > 0) {
        x = x + (dec % 2) * i ;
        dec = dec / 2 ;
        i = i * 10 ;
    }

    printf("Binary is: %d", x) ;

    return 0 ;
}