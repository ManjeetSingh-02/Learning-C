#include <stdio.h>

int main() {
	
	int arr[] = {11 , 22 , 33 , 44 , 55} ;
	
	int *p1 = arr ;
	printf("%d\n", *p1++) ; // 11
	printf("%d", (*p1)++) ; // 22
	
	return 0 ;
}
