#include <stdio.h>
#include <math.h>

int main() {

    int i , dec , x ;

    printf("Enter decimal number: ") ;
    scanf("%d", &dec) ;

    i = 1 ;
    x = 0 ;
    
    while(dec > 0) {
        x = x + (dec % 8) * i ;
        dec = dec / 8 ;
        i = i * 10 ;
    }

    printf("Octal is: %d", x) ;

    return 0 ;
}