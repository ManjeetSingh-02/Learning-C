#include <stdio.h>

int main() {

    FILE *fp = NULL ;

    fp = fopen("a.txt", "w") ;

    if (fp == NULL) {
        printf("File not created successfully") ;
    }
    else {
        int i ;

        printf("File created successfully") ;
        for(i = 1 ; i < 26 ; i++) {
            fputc(i+64, fp) ;
        }
    }

    fclose(fp) ;
    
    return 0 ;
}