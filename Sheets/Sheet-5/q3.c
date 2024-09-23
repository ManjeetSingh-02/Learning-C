#include <stdio.h>

int main() {
	int ms , s , m , h ;
	
	printf("Enter Time in ms : ") ;
	scanf("%f", &ms) ;
	
	s = ms / 1000 ;
	m = s / 60 ;
	h = m / 60 ;
	
	printf("MS = %f" , ms) ;
	printf("S = %f" , s) ;
	printf("M = %f" , m) ;
	printf("H = %f" , h) ;
	
	return 0 ;
}
