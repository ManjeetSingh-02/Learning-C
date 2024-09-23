#include <stdio.h>

int main() {
	
	int (*ptr)[2][5];
	int *p = NULL ;
	int arr[2][5] = {{99 , 88 , 77 , 66 , 55} , {11 , 22 , 33 , 44 , 55}} ;
	p = &arr[0][0] ;
	ptr = &arr ;
	printf("%u %u\n", p , ptr) ; // 100 100
	printf("%d\n", ***ptr) ; // 99
	printf("%d %d\n", *p , *(*(*(ptr+0)+1))) ; // 99 11
	printf("%d %d\n", *p , *(ptr[0][1])) ; // 99 11
	
	return 0 ;
}
