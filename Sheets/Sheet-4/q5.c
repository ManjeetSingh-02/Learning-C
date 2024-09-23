#include <stdio.h>

int main() {
    
    int a , fd , ld , sum ;
    
    printf("Enter Num : ") ;
    scanf("%d", &a) ;
    
    ld = a % 10 ;
    
    while (a >= 10) {
        a = a / 10 ;
    }
    
    fd = a ;
    
    sum = fd + ld ;
    
    printf("Sum of first and last digit is = %d", sum) ;
    
    return 0;
}