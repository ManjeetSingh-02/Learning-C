#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp = NULL ;

    fp = fopen("a.txt", "w") ;

    if (fp == NULL) {
        printf("File not created successfully") ;
    }
    else {
        char str[20] ;
        int i ;

        printf("Enter 4 names:\n") ;
        for(i = 0 ; i < 5 ; i++) {
            gets(str) ;
            fputs(str, fp) ;
            fputc('\n', fp) ;
        }
    }

    fclose(fp) ;
    
    return 0 ;

}