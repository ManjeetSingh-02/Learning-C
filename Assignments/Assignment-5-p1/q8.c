#include <stdio.h>

int main() {
    
    int i = 1 , sum = 0 , n ;
    printf("Enter n: ") ;
    scanf("%d", &n) ;

    while(i <= n) {
        if (i % 2 != 0) {
            sum = sum + i ;
        }
        i++ ;
    }

    printf("%d", sum) ;

    return 0 ;
}