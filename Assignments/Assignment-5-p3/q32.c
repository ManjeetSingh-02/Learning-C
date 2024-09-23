#include <stdio.h>

int main() {
	
    int i , a , ans = 0 ;
    
    printf("Enter a num: ") ;
    scanf("%d", &a) ;
    
    for(i = 1 ; i <= (a/2) ; i++) {
    	if (a % i == 0) {
    		ans = ans + i ;
		}
	}
	
	if (ans == a) {
		printf("It's a Perfect Number") ;
	}
	else {
		printf("It's not a Perfect Number") ;
	}
    
    return 0 ;
}
