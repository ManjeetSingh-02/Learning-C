#include <stdio.h>

int main() {
	int sal , da , hra , ts ;
	
	printf("Enter Salary : ") ;
	scanf("%d", &sal) ;
	
	if (sal <= 2000) {
		da = (sal * 10) / 100 ;
		hra = (sal * 20) / 100 ;
	}
	else if (sal > 2000 && sal <= 5000) {
		da = (sal * 20) / 100 ;
		hra = (sal * 30) / 100 ;
	}
	else if (sal > 5000 && sal <= 10000) {
		da = (sal * 30) / 100 ;
		hra = (sal * 40) / 100 ;
	}
	else {
		da = (sal * 50) / 100 ;
		hra = (sal * 50) / 100 ;
	}
	
	ts = sal + da + hra ;
	
	printf("Total Salary = %d" , ts) ;
	
	return 0 ;
}
