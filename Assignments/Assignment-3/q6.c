#include <stdio.h>

int main() {

    int num ;
    printf("Enter a number: ") ;
    scanf("%d", &num) ;
    
    if (num == 0) {
        printf("Zero") ;
    }
    else if (num < 0)
    {
        printf("Negative") ;
    }
    else if (num > 9) {
        if (num % 2 == 0) {
            printf("Even") ;
        }
        else {
            printf("Odd") ;
        }
    }
    else {
        if (num == 1) {
            printf("One") ;
        }
        else if (num == 2) {
            printf("Two") ;
        }
        else if (num == 3) {
            printf("Three") ;
        }
        else if (num == 4) {
            printf("Four") ;
        }
        else if (num == 5) {
            printf("Five") ;
        }
        else if (num == 6) {
            printf("Six") ;
        }
        else if (num == 7) {
            printf("Seven") ;
        }
        else if (num == 8) {
            printf("Eight") ;
        }
        else {
            printf("Nine") ;
        }
    }
    
    return 0 ;
}