#include <stdio.h>

int main() {

    int a ;

    printf("Enter a number: ") ;
    scanf("%d", &a) ;

    switch(a) {
        case 0: printf("Zero") ; break ;
        default: switch(a>0) {
        	case 0: printf("Negative") ; break;
        	default: printf("Positive") ;
		}
    }

    return 0 ;
}
