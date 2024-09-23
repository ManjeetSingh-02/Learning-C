#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr ;
	ptr = (int *)malloc(sizeof(int)) ;
//	ptr = (int *)malloc(n * sizeof(int)) ;
	*ptr = 23 ;
	printf("%d\n", *ptr) ; // 23
	printf("Heap - %u Stack - %u", ptr , &ptr) ;
	return 0 ;
}
