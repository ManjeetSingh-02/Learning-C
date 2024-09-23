#include <stdio.h>

int main() {
	int i , x , arr[5] ;
	
	printf("Enter 5 elements : \n") ;
	for (i = 0 ; i < 5 ; i++) {
		scanf("%d", &arr[i]) ;
	}
	
	printf("Enter the element to search : ") ;
	scanf("%d", &x) ;
	
	for (i = 0 ; i < 5 ; i++) {
		if (arr[i] == x) {
			printf("Element %d found at %d", x , i + 1) ;
		}
	}
	
	if (i == 5) {
		printf("Element not found") ;
	}
}
