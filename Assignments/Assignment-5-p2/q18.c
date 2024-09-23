#include <stdio.h>
#include <math.h>

int main() {

    int i , ans , a , x , p ;
    printf("Enter a number: ") ;
    scanf("%d", &a) ;
    
    p = log10(a) ;
    
    int freq[10] ;
    
    for(i = 0 ; i < 10 ; i++) {
    	freq[i] = 0 ;
	}
    
    while (a > 0) {
        x = a % 10 ;
        freq[x]++ ;
        a = a / 10 ;
    }
    
    for(i = 0 ; i < 10 ; i++) {
    	printf("%d - %d\n", i , freq[i]) ;
	}
    
    return 0 ;
}
