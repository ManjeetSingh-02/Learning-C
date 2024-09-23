#include <stdio.h>

int main() {

    int num ;
    printf("Enter a number: ") ;
    scanf("%d", &num) ;

    if (num % 5 == 0)
    {
        if (num % 11 == 0) {
            printf("Number is divisible") ;
        }
        else {
            printf("Number is not divisible") ;
        }
    }
    else {
        printf("Number is not divisible") ;
    }
    
    return 0 ;
}