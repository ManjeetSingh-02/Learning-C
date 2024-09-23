#include <stdio.h>

int main() {
    
    int a , b , t ;
    
    printf("Enter Num 1 : ") ;
    scanf("%d", &a) ;
    
    printf("Enter Num 2 : ") ;
    scanf("%d", &b) ;
    
    printf("Before Swapping\nNum 1 : %d\nNum 2 : %d", a , b) ;
    
    t = a ;
    a = b ;
    b = t ;
    
    printf("\nAfter Swapping\nNum 1 : %d\nNum 2 : %d", a , b) ;
    
    return 0;
}