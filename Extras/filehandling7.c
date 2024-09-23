#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp = NULL ;
    char str[20] ;
    int i ;

    fp = fopen("a.txt", "w+") ;

    if (fp == NULL) {
        printf("File not created successfully") ;
    }
    else {
        printf("Enter 3 names: ") ;
        for(i = 0 ; i < 4 ; i++) {
            gets(str) ;
            fputs(str, fp) ;
            fputc('\n', fp) ;
        }
    }

    rewind(fp) ;

    printf("Data - \n") ;

    while(!feof(fp)) {
        
        puts(str) ;
    }

    fclose(fp) ;

    return 0 ;

}