#include <stdio.h>

void main() {
	int minutes , hours , rem ;
	printf("Input the Minutes: ") ;
	scanf("%d", &minutes) ;
	
	hours = minutes / 60 ;
	rem = minutes - (hours * 60) ;
	
	printf("%d hours, %d minutes", hours ,rem) ;
	return 0 ;
}
