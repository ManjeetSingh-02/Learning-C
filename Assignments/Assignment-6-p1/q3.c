#include <stdio.h>

int main() {

    int i , arr[5] , sum = 0 ;

    printf("Enter 5 Elements:\n") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]) ;
    }

    printf("Elements are:") ;
    for(i = 0 ; i < 5 ; i++) {
        sum = sum + arr[i] ;
    }

    printf("Sum of all elements is: %d", sum) ;
    
    return 0 ;
}