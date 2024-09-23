#include <stdio.h>

void main() {
	int i , marks[5] , total = 0 , avg = 0 ;
	float per = 0 ;
	printf("Input the marks of 5 subjects: ") ;
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &marks[i]) ;
	}
	
	for(i = 0 ; i < 5 ; i++) {
		total = total + marks[i] ;
	}
	
	avg = total / 5 ;
	
	per = (total * 100) / 500 ;
	
	printf("Total: %d", total) ;
	printf("\nAverage: %d", avg) ;
	printf("\nPercentage: %.2f", per) ;
	return 0 ;
}
