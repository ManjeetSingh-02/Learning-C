#include <stdio.h>

int main() {

    char a ;
    int ans ;

    printf("Enter a  Character : ") ;
    a = getchar() ;
    
    ans = (int)a ;

    if (ans >= 65 && ans <= 90) {
        printf("UPPER CASE CHARACTER") ;
    }
    else if (ans >= 97 && ans <= 122) {
        printf("LOWER CASE CHARACTER") ;
    }
    else {
        printf("SPECIAL CHARACTER") ;
    }

    return 0 ;
}