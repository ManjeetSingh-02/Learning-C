#include <stdio.h>

int main() {
	int i , age[] = {11 , 22 , 33 , 44} ;
	int *p2 = &age[0] ;
	
	for(i = 0 ; i < 4 ; i++) {
		printf("%d ", p2[i]) ;
	}
	return 0 ;
}
