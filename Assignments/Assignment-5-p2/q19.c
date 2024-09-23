#include <stdio.h>
#include <math.h>

int main() {

    int i , ans , a , b , x , p , num ;
    printf("Enter a number: ") ;
    scanf("%d", &a) ;
    
    b = a ;
    p = log10(a) ;
    
    int arr[p+1] ;
    
    while (a > 0) {
        x = a % 10 ;
        arr[p] = x ;
        a = a / 10 ;
        p-- ;
    }
    
    p = log10(b) ;
    
    for(i = 0 ; i <= p ; i++) {
    	
		num = arr[i] ;
    	
    	if (num == 1) {
            printf("One ") ;
        }
        else if (num == 2) {
            printf("Two ") ;
        }
        else if (num == 3) {
            printf("Three ") ;
        }
        else if (num == 4) {
            printf("Four ") ;
        }
        else if (num == 5) {
            printf("Five ") ;
        }
        else if (num == 6) {
            printf("Six ") ;
        }
        else if (num == 7) {
            printf("Seven ") ;
        }
        else if (num == 8) {
            printf("Eight ") ;
        }
        else {
            printf("Nine ") ;
        }
	}
    
    return 0 ;
}
