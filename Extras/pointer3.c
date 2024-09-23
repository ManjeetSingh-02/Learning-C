#include <stdio.h>

int main() {
	char name[] = "Sachin" ;
	int age[] = {11 , 22 , 33 , 44} ;
	char *p1 = &name[0] ;
	int *p2 = &age[0] ;
	
	printf("%c %d\n", *p1 , *p2) ; // S 11
	printf("%c %d\n", *p1 , *p2) ; // S 11
	return 0 ;
}
