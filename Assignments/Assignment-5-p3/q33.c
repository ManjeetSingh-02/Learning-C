#include <stdio.h>

int main() {
	
    int i , j , ans , n ;
    
    printf("Enter n : ") ;
    scanf("%d", &n) ;
    
    for(i = 1 ; i <= n ; i++) {
    	ans = 0 ;
	    for(j = 1 ; j <= (i/2) ; j++) {
    		if (i % j == 0) {
    			ans = ans + j ;
			}
		}
	
		if (ans == i) {
			printf("%d\n", i) ;
		}	
	}
    
    return 0 ;
}
