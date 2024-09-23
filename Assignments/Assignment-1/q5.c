#include <stdio.h>

void main() {
	int kms ;
	float miles ;
	printf("Input the Kilometers per hour: ") ;
	scanf("%d", &kms) ;
	
	miles = 0.621371 * kms ;
	
	printf("%f miles per hour", miles) ;
	return 0 ;
}
