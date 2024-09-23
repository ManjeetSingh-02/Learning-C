#include <stdio.h>

int main() {

    int l1 , b1 , l2 , b2 , area1 , area2 ;
    printf("Enter length & breadth of 1st rectangle: ") ;
    scanf("%d %d", &l1 , &b1) ;

    printf("Enter length & breadth of 2st rectangle: ") ;
    scanf("%d %d", &l2 , &b2) ;

    area1 = l1 * b1 ;
    area2 = l2 * b2 ;

    if (area1 > area2) {
        printf("Area of 1st rectangle is greater whose Length and Breadth are : %d , %d", l1 , b1) ;
    }
    else {
        printf("Area of 2st rectangle is greater whose Length and Breadth are : %d , %d", l2 , b2) ;
    }

    return 0 ;
}