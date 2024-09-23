#include <stdio.h>

int main() {
	float w1 , w2 , i1 , i2 , t1 , t2 , avg ;
	
	printf("Enter Weight 1 : ") ;
	scanf("%f", &w1) ;
	
	printf("Enter Total No Of Items in Weight 1 : ") ;
	scanf("%f", &i1) ;
	
	printf("Enter Weight 2 : ") ;
	scanf("%f", &w2) ;
	
	printf("Enter Total No Of Items in Weight 1 : ") ;
	scanf("%f", &i2) ;
	
	t1 = w1 * i1 ;
	t2 = w2 * i2 ;
	
	avg = (t1 + t2) / (i1 + i2) ;
	
	printf("Average = %f" , avg) ;
	
	return 0 ;
}
