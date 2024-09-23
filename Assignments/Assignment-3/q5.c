#include <stdio.h>

int main() {

    char a ;

    printf("Enter a  Character :") ;
    a = getchar() ;

    if ('a' >= 65 && 'a' <= 90) {
        printf("Upper Case") ;
    }
    else {
        printf("Lower Case") ;
    }

    return 0 ;
}