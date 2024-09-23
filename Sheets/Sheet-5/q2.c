#include <stdio.h>

int main() {
	int empid , wh , amount ;
	
	printf("Enter EMP ID : ") ;
	scanf("%d", &empid) ;
	
	printf("Enter WORK HOURS : ") ;
	scanf("%d", &wh) ;
	
	printf("Enter AMOUNT : ") ;
	scanf("%d", &amount) ;
	
	printf("EMP ID = %f" , empid) ;
	printf("SALARY = %f" , wh * amount ) ;
	
	return 0 ;
}
