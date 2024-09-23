#include <stdio.h>

int fact(int) ;

int main() {
	
	int n , ans ;
	
	printf("Enter a num to find it's factorial: ") ;
	scanf("%d", &n) ;
	
	ans = fact(n) ;
	
	printf("%d", ans) ;
	
	return 0 ;
}

int fact(int x) {
	if (x == 1) {
		return 1 ;
	}
	else {
		return x * fact(x-1) ;
	}
}
