#include <stdio.h>

int main() {
	int i ,  t , arr1[5] , arr2[5] ;
	
	printf("Enter 5 elements : \n") ;
	for (i = 0 ; i < 5 ; i++) {
		scanf("%d", &arr1[i]) ;
	}
	
	for (i = 0 ; i < 5 ; i++) {
		arr2[i] = arr1[4-i] ;
	}
	
	printf("After Reversing : ") ;
	for (i = 0 ; i < 5 ; i++) {
		printf("%d", arr2[i]) ;
	}
}
