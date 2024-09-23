#include <stdio.h>

int main() {
	int i , j , sum = 0 , arr[3][3] ;
	
	printf("Enter 3 * 3 Matrix : \n") ;
	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 3 ; j++) {
			scanf("%d", &arr[i][j]) ;
		}
	}
	
	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 3 ; j++) {
			if (i == j) {
				sum = sum + arr[i][j] ;
			}
		}
	}
	
	printf("Sum = %d", sum) ;
	
}
