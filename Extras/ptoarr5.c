#include <stdio.h>

int main() {
	
	int i , j , arr[2][5] = {{99 , 88 , 77 , 66 , 55} , {11 , 22 , 33 , 44 , 55}} ;
	int *p1 = NULL ;
	int (*p2)[2] = NULL ;
	int (*p3)[2][5] = NULL ;
	
	p1 = &arr[0][0] ;
	p2 = &arr[5] ;
	p3 = &arr ;
	
	printf("P1\n") ;
	for(i = 0 ; i < 2 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			p1 = &arr[i][j] ;
			printf("%d ", *p1) ;
		}
	}
	
	printf("\nP2\n") ;
	for(i = 0 ; i < 2 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			printf("%d ", ) ;
		}
	}
	
	printf("\nP3\n") ;
	for(i = 0 ; i < 2 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			printf("%d ", (*p3)[i][j]) ;
		}
	}
	
	return 0 ;
}
