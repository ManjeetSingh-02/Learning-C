#include <stdio.h>

void fun() ;

int *gp = NULL ;
//int num = 34 ;

int main() {
	fun() ;
	printf("%d", *gp) ; // garbage data
	return 0 ;
}

void fun() {
	int num = 34 ;
	gp = &num ;
	printf("%d\n", *gp) ; // main data - 34
}
