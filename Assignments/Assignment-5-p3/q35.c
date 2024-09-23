#include <stdio.h>

int fact(int) ;

int main() {
	
    int i , a , ans , x , y , n ;
    
    printf("Enter n : ") ;
    scanf("%d", &n) ;
    
    for(i = 1 ; i <= n ; i++) {
    	a = i ;
    	ans = 0 ;
    
    	while(a > 0) {
    		y = a % 10 ;
    		x = fact(y) ;
    		ans = ans + x ;
    		a = a / 10 ;
		}
	
		if (ans == i) {
			printf("%d\n", ans) ;
		}
	}
    
    return 0 ;
}

int fact(int n) {
	int j , k = 1 ;
	
	for(j = n ; j >= 1 ; j--) {
		k = k * j ;
	}
	
	return k ;
}
