#include <stdio.h>

int main() {

    int i , j , a , flag ;
    printf("Enter a number: ") ;
    scanf("%d", &a) ;

    printf("Prime Factors are:\n") ;
    for(i = 2 ; i < a ; i++) {
        if (a % i == 0) {
            flag = 0 ;
            for (j = 2 ; j <= i / 2 ; j++) {
    	        if (i % j == 0) {
			        flag = 1 ;
			        break ;
      	        }
            }
    
            if (flag == 0) {
                printf("%d ", i) ;
            }
        }
    }

    return 0 ;
}