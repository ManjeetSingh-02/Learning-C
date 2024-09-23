#include <stdio.h>
#include <math.h>

int main() {

    int a , b , c , d ;
    float r1 , r2 ;

    printf("Input a: ") ;
    scanf("%d", &a) ;

    printf("Input b: ") ;
    scanf("%d", &b) ;
    
    printf("Input c: ") ;
    scanf("%d", &c) ;

    d = (b * b) - (4 * a * c) ;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a) ;
        r2 = (-b - sqrt(d)) / (2 * a) ;

        printf("Roots are: %.2f , %.2f", r1 , r2) ;
    }
    else {
        printf("Discriminant is less than 0") ;
    }

    return 0 ;
}