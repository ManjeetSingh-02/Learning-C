#include <stdio.h>

int main() {

    int i , arr[5] , ne = 0 ;

    printf("Enter 5 Elements:\n") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]) ;
    }
    for(i = 0 ; i < 5 ; i++) {
        if (arr[i] < 0) {
            ne++ ;
        }
    }

    printf("Total no of negative elements are: %d", ne) ;
    
    return 0 ;
}