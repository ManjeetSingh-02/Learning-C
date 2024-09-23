#include <stdio.h>

int main() {

    int i , a[5] , b[5] ;

    printf("Enter 5 Elements:\n") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &a[i]) ;
    }

    for(i = 0 ; i < 5 ; i++) {
        b[i] = a[i] ;
    }

    printf("After copying , second array is:") ;
    for(i = 0 ; i < 5; i++) {
        printf("\n%d", b[i]) ;
    }
    
    return 0 ;
}