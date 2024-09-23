#include <stdio.h>

int main() {

    int year , ans ;

    printf("Enter a  Year :") ;
    scanf("%d", &year) ;

    ans = year % 400 == 0 ? printf("LEAP YEAR") : year % 100 == 0 ? printf("NON-LEAP YEAR") : year % 4 == 0 ? printf("LEAP YEAR") : printf("NON-LEAP YEAR") ;

    return 0 ;
}