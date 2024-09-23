#include <stdio.h>

int main() {
    
    int num , cu ;
    
    printf("Enter Num : ") ;
    scanf("%d", &num) ;
    
    cu = num * num * num ;
    
    printf("Cube = %d", cu) ;
    
    return 0;
}