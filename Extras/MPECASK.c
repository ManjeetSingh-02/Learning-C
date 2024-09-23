#include <stdio.h>
#include <stdlib.h>

int main() {

    int n ;

    printf("Enter 1 - Google\nEnter 2 - YouTube\nEnter 3 - Flipkart\nEnter 4 - Amazon\n") ;
    printf("Enter: ") ;
    scanf("%d", &n) ;

    if (n == 1) {
        system("start chrome https://google.com") ;
    }
    else if (n == 2) {
        system("start chrome https://youtube.com") ;
    }
    else if (n == 3) {
        system("start chrome https://flipkart.com") ;
    }
    else if (n == 4) {
        system("start chrome https://amazon.com") ;
    }

    return 0 ;
}