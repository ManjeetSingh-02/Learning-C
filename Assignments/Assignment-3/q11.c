#include <stdio.h>

int main() {

    int a , b , c ;

    printf("Enter all 3 angles of a triangle: ") ;
    scanf("%d %d %d", &a , &b , &c) ;

    if (a == b && b== c) {
        printf("Equilateral") ;
    }
    else if (a != b && a != c && b != c) {
        printf("Scalene") ;
    }
    else {
        printf("Isosceles") ;
    }

    return 0 ;
}