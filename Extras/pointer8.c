#include <stdio.h>

int main() {
	int i , age[] = {11 , 22 , 33 , 44} ;
	int *p1 = &age[0] ; // pointing to first element of array , scale is 4 bytes , preferrable
	// int *p2 = &age ; error in C++ but not in C pointing to whole array , scale is 4*5 i.e. 20 bytes
	// int (*p2) [0] = age ; error as address of array not found
	// int *(p2) [0] = &age ; error as * and p2 needs to be together
	int (*p2) [0] = &age ; // doesn't give error in C++ and pointing to array
	
	printf("%u %u ", p1 , p2) ;
	p1++ ;
	p2++ ;
	printf("%u %u ", p1 , p2) ;
	
	return 0 ;
}
