#include <stdio.h>

int main(int argc , char *argv[]) {

    printf("No of arguments - %d\n", argc) ;
    printf("No of arguments w/o file name - %d\n", argc-1) ;

    printf("%s \n", argv[0]) ;
    printf("%s \n", argv[1]) ;
    printf("%s \n", argv[2]) ;
    printf("%s \n", argv[3]) ;
    return 0 ;
}