#include <stdio.h>

int main() {

    int i , arr[5] , even  = 0 , odd = 0 ;

    printf("Enter 5 Elements:\n") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]) ;
    }

    for(i = 0 ; i < 5 ; i++) {
        if (arr[i] % 2 == 0) {
            even++ ;
        }
        else {
            odd++ ;
        }
    }

    printf("\nEven elements are: %d", odd) ;
    printf("\nEven elements are: %d", even) ;
    
    return 0 ;
}