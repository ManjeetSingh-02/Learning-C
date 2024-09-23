#include <stdio.h>

void main() {
	int id , hrs , amount ;
	float salary ;
	printf("Input the Employees ID(Max 10 Chars): ") ;
	scanf("%d", &id) ;
	printf("\nInput the Working Hours: ") ;
	scanf("%d", &hrs) ;
	printf("\nInput the Salary amount per hour: ") ;
	scanf("%d", &amount) ;
	
	salary = hrs * amount ;
	
	printf("Employee ID: %d\n", id) ;
	printf("Salary: U$ %.2f\n", salary) ;
	return 0 ;
}
