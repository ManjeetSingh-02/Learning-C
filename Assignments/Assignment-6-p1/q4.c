#include <stdio.h>

int main() {

    int i , arr[5] , max , min ;

    printf("Enter 5 Elements:\n") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]) ;
    }

    max = arr[0] ;
    min = arr[0] ;
    for(i = 1 ; i < 5 ; i++) {
        if (max < arr[i]) {
            max = arr[i] ;
        }
        if (min > arr[i]) {
            min = arr[i] ;
        }
    }

    printf("\nMax elements is: %d", max) ;
    printf("\nMin elements is: %d", min) ;
    
    return 0 ;
}