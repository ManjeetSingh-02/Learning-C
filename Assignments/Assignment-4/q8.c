#include <stdio.h>

int main() {

    int a , b ;
    char op ;
    
    printf("Enter operand +,-,*,/,%%: ") ;
    op = getchar() ;
    
    printf("Enter 2 numbers: ") ;
    scanf("%d", &a) ;
    scanf("%d", &b) ;

    switch(op) {
        case '+': printf("%d", a + b) ; break ;
        case '-': printf("%d", a - b) ; break ;
        case '*': printf("%d", a * b) ; break ;
        case '/': printf("%d", a / b) ; break ;
        case '%': printf("%d", a % b) ; break ;
        default: printf("Invalid Operand") ;
    }

    return 0 ;
}