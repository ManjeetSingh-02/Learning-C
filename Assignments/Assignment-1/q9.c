#include <stdio.h>

void main() {
	int i = 0 , temp , amount , nos[7] = {100 , 50 , 20 , 10 , 5 , 2 , 1} , notes[7] = {0 , 0 , 0 , 0 , 0 , 0 , 0} ;
	printf("Input the amount: ") ;
	scanf("%d", &amount) ;

	while(amount > 0) {
		temp = amount / nos[i] ;
		notes[i] = temp ;
		amount = amount - (temp * nos[i]) ;
		i++ ;
	}

	for(i = 0 ; i < 7 ; i++) {
		printf("Total No of Notes of %d is %d\n", nos[i] , notes[i]) ;
	}
}