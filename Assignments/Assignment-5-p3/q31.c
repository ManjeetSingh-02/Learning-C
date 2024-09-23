#include <stdio.h>

int main() {
	
    int i , a , b , ans , x ,n ;
    
    printf("Enter n : ") ;
    scanf("%d", &n) ;
    
    for(i = 1 ; i <= n ; i++) {
    	a = i ;
    	ans = 0 ;
    	
    	while(a > 0) {
    		x = a % 10 ;
    		ans = ans + (x * x * x) ;
    		a = a / 10 ;
		}
		
		if (ans == i) {
			printf("%d", i) ;
		}
	}
    
    return 0 ;
}
