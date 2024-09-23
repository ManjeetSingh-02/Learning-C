#include <stdio.h>

int main() {
	int i , age[] = {11 , 22 , 33 , 44} ;
	int *p2 = &age[0] , *tmp = p2 ;
	
	printf("pointer - %u %u ", p2 , tmp) ;
	
	for(i = 0 ; i < (sizeof(age) / sizeof(age[0])) ; i++) {
		printf("%d ", *(p2 + i)) ;
		printf("%d ", *tmp) ;
		tmp++ ;
	}
	
	printf("pointer - %u %u ", p2 , tmp) ;
	
	return 0 ;
}
