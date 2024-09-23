#include <stdio.h>

int main(int argc , char *argv[]) {

    int i ;

    printf("No of arguments - %d\n", argc) ;
    printf("No of arguments w/o file name - %d\n", argc-1) ;

    for(i = 0 ; i < argc ; i++) {
        printf("%s\n", argv[i]) ;
    }
    
    return 0 ;
}