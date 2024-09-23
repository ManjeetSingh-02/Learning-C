#include <stdio.h>

int main() {

    char a ;
    int ans ;

    printf("Enter a  Character : ") ;
    a = getchar() ;
    
    ans = (int)a ;

    if ((ans >= 65 && ans <= 90) || (ans >= 97 && ans <= 122)) {
        printf("Alphabet") ;
    }
    else {
        printf("Not an alphabet") ;
    }

    return 0 ;
}