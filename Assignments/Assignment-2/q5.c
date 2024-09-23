#include <stdio.h>

int main() {

    char a ;

    printf("Enter a  Character :") ;
    a = getchar() ;

    if ('a' >= 65 && 'a' <= 122) {
        printf("Alphabet") ;
    }

    return 0 ;
}