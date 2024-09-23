#include <stdio.h>

int main() {

    char a ;
    int ans ;

    printf("Enter a  Character : ") ;
    a = getchar() ;
    
    ans = (int)a ;

    if (ans >= 48 && ans <= 57) {
        printf("Digit") ;
    }
    else if (ans >= 65 && ans <= 122) {
        printf("Alphabet") ;
    }
    else {
        printf("Special Character") ;
    }

    return 0 ;
}