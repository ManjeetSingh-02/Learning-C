#include <stdio.h>

int main() {
	
    int i , n , n1 = 0 , n2 = 1 , nth ;
    
    printf("Enter n : ") ;
    scanf("%d", &n) ;
    
    nth = n1 + n2 ;
    
    printf("%d\n", nth) ;
    
    for(i = 3 ; i <= n ; i++) {
    	printf("%d\n", nth) ;
		n1 = n2 ;
		n2 = nth ;
    	nth = n1 + n2 ;
	}
    
    return 0 ;
}
