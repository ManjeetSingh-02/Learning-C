#include <stdio.h>

int main() {
	
	int arr[2][5] = {{11 , 22 , 33 , 44 , 55} , {99 , 88 , 77 , 66 , 55}} ;
	
//	int *p1 = &x ; pointer to int
//	int (*p1)[5] = &arr ; pointer to int array
//	int (*p1)[2][5] ; pointer to int 2-D array
//	int (*p1)[2][5] = &arr[0][0] ; first element of 2-D array
//	printf("%d", *(p1 + 5)) ; 99

	int (*p1)[2][5] = &arr ;
	printf("%d", (*p1)[1][0]) ; // 99
	
	return 0 ;
}
