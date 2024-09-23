#include <stdio.h>
#include <math.h>

int main() {

    int i , arr[4] , ans = 0 , oct = 0 ;

    printf("Enter 4-bit binary number:\n") ;
    for(i = 0 ; i < 4 ; i++) {
        printf("Bit %d - ", i+1) ;
        scanf("%d", &arr[i]) ;
    }

    for(i = 0 ; i < 4 ; i++) {
        ans = ans + (arr[i] * pow(2 , 3-i)) ;
    }

    i = 1 ;
    
    while(ans > 0) {
        oct = oct + (ans % 8) * i ;
        ans = ans / 8 ;
        i = i * 10 ;
    }

    printf("Octal is: %d", oct) ;

    return 0 ;
}