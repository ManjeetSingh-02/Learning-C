#include <stdio.h>

int main() {
	
	int units ;
    float bill , tamount ;

    printf("Enter electricity units: ") ;
    scanf("%d", &units) ;
    
    if(units <= 50) {
        bill = units * 0.50;
    }
    else if(units <= 150) {
        bill = 25 + ((units-50) * 0.75);
    }
    else if(units <= 250) {
        bill = 100 + ((units-150) * 1.20);
    }
    else {
        bill = 220 + ((units-250) * 1.50);
    }
	
	tamount = (bill * 0.20) + bill ;
	
	printf("Units - %d\nBill - %.2f", units , tamount) ;
    
    return 0 ;
}
