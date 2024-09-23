#include <stdio.h>

int main() {
	
	int arr[] = {11 , 22 , 33 , 44 , 55} ;
	
	int *p1 = arr ;
	printf("%d", *(p1 + 2)) ;
	
//	int *p1 = &arr[2] ;
//	printf("%d", *p1) ;
	
	return 0 ;
}
