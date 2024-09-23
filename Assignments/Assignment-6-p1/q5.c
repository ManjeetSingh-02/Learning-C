#include <stdio.h>

int main() {

    int i , arr[5] , j , x ;

    printf("Enter 5 Elements:\n") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]) ;
    }

    for(i = 0 ; i < 5-1 ; i++) {
        for(j = 0 ; j < 5-i-1 ; j++) {
            if (arr[j] > arr[j+1]) {
                x = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = x ;
            }
        }
    }

    printf("Second Minimum is: %d", arr[4]) ;
    
    return 0 ;
}