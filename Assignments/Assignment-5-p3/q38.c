#include <stdio.h>

int main() {

    int i , arr[8] , x ;

    printf("Enter 8-bit binary number:\n") ;
    for(i = 0 ; i < 8 ; i++) {
        printf("Bit %d - ", i+1) ;
        scanf("%d", &arr[i]) ;
    }

    for(i = 0 ; i < 8 ; i++) {
        if (arr[i] == 0) {
            arr[i] = 1 ;
        }
        else {
            arr[i] = 0 ;
        }
    }

    for(i = 7 ; i >= 0 ; i--) {
        if (arr[i] == 1) {
            x = i ;
            break ;
        }
    }

    for(i = 0 ; i < x ; i++) {
        if (arr[i] == 0) {
            arr[i] = 1 ;
        }
        else {
            arr[i] = 0 ;
        }
    }

    printf("Two's Complement is: ") ;
    for(i = 0 ; i < 8 ; i++) {
        printf("%d", arr[i]) ;
    }

    return 0 ;
}