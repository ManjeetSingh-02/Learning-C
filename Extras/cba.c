#include<stdio.h>

int add(int *, int *) ;

int main() {
	int a = 3 , b = 5 , res ;
	res = add(&a , &b) ;
	printf("\n%d a = %d b = %d", res , a , b) ;
}

int add(int *x , int *y) {
	int z ;
	z = *x + *y ;
	*x = *x + 1 ;
	*y = *y + 1 ;
	printf("x = %d y = %d", *x , *y) ;
	return z ;
}
