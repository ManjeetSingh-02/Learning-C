#include <stdio.h>

void main() {
	int minutes , hours , seconds , rems ;
	printf("Input the Seconds: ") ;
	scanf("%d", &seconds) ;
	
	hours = seconds / 3600 ;
	minutes = (seconds / 60) - (hours * 60) ;
	rems = seconds - ((hours * 3600) + (minutes * 60));
	
	printf("H:M:S - %d:%d:%d", hours, minutes , rems) ;
	return 0 ;
}
