#include <stdio.h>

int main() {

    int a , b ;

    printf("Enter 2 Numbers: ") ;
    scanf("%d", &a) ;
    scanf("%d", &b) ;

    printf("Before Swapping , a = %d & b = %d", a , b) ;
    
    a = a ^ b ;
    b = a ^ b ;
    a = a ^ b ;

    printf("After Swapping , a = %d & b = %d", a , b) ;

    return 0 ;
}