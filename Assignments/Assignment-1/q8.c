#include <stdio.h>

void main() {
	int days , years , weeks , remdays ;
	printf("Input the days: ") ;
	scanf("%d", &days) ;
	
	years = days / 365 ;
	remdays = days - (years * 365) ;
	weeks = (remdays / 7) ;
	remdays = remdays - (weeks * 7) ;
	
	printf("Years: %d", years) ;
	printf("\nWeeks: %d", weeks) ;
	printf("\nDays: %d", remdays) ;
	
	return 0 ;
}
