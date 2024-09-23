#include <stdio.h>

int main() {
	int i , sum = 0 , t = 0 , arr[10] ;
	
	printf("Enter 10 elements : \n") ;
	for (i = 0 ; i < 10 ; i++) {
		scanf("%d", &arr[i]) ;
	}
	
	for (i = 0 ; i < 10 ; i++) {
		sum = sum + arr[i] ;
		
		if (arr[i] % 2 == 0) {
			t++ ;
		}
	}
	
	printf("Sum = %d \n", sum) ;
	printf("Evens = %d", t) ;
	
}
