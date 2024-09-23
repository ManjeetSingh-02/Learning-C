#include <stdio.h>

int main() {

    int arr[5] , i ;
    float per = 0 ;

    printf("Enter marks of 5 subjects: ") ;
    for(i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]) ;
    }

    for(i = 0 ; i < 5 ; i++) {
        per = per + arr[i] ;
    }

    per = (per / 500) * 100 ;

    if (per >= 90) {
        printf("Percentage = %.2f", per) ;
        printf("\nGrade A") ;
    }
    else if (per >= 80 && per < 90) {
        printf("Percentage = %.2f", per) ;
        printf("\nGrade B") ;
    }
    else if (per >= 70 && per < 80) {
        printf("Percentage = %.2f", per) ;
        printf("\nGrade C") ;
    }
    else if (per >= 60 && per < 70) {
        printf("Percentage = %.2f", per) ;
        printf("\nGrade D") ;
    }
    else if (per >= 40 && per < 60) {
        printf("Percentage = %.2f", per) ;
        printf("\nGrade E") ;
    }
    else {
        printf("Percentage = %.2f", per) ;
        printf("\nGrade F") ;
    }
    
    return 0 ;
}