#include <stdio.h>

int main() {

    int a , i = 0 , ans , arr[4] ;

    printf("Enter a 4-digit Number: ") ;
    scanf("%d", &a) ;

    while (a > 0) {
        ans = a % 10 ;
        arr[i] = ans ;
        a = a / 10 ;
        i++ ;
    }

    for(i = 3 ; i >= 0 ; i--) {
        printf("%d ", arr[i]) ;
    }

    return 0 ;
}