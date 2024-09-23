#include <stdio.h>

int main() {
    
    int i , marks[5] , tm = 0 ;
    float avgm , percent ;
    
    printf("Enter Marks : \n") ;
    for (i = 0 ; i < 5 ; i++) {
        scanf("%d", &marks[i]) ;
    }
    
    for (i = 0 ; i < 5 ; i++) {
        tm = tm + marks[i] ;
    }
    
    avgm = tm / 5 ;
    
    percent = (tm / 100) * 500 ;
    
    printf("Total Marks = %d \n", tm) ;
    printf("Average Marks = %f \n", avgm) ;
    printf("Percent = %f \n", percent) ;
    
    return 0;
}