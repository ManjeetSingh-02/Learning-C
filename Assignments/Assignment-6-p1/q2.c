#include <stdio.h>

int main() {

    int i , arr[5] ;

    printf("Enter 5 Elements:\n") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]) ;
    }

    printf("Negative Elements are:") ;
    for(i = 0 ; i < 5 ; i++) {
        if (arr[i] < 0) {
            printf("\n%d", arr[i]) ;
        }
    }
    
    return 0 ;
}