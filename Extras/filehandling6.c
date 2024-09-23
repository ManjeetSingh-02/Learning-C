#include <stdio.h>

int main() {

    FILE *fp = NULL ;
    char ch ;
    int i ;

    fp = fopen("a.txt", "w+") ;

    if (fp == NULL) {
        printf("File not created successfully") ;
    }
    else {
        printf("Enter 4 names:\n") ;
        for(i = 0 ; i <= 7 ; i++) {
            printf("Enter a char: ") ;
            scanf(" %c", &ch) ;
            fputc(ch, fp) ;
        }
    }

    rewind(fp) ;

    printf("Data - \n") ;

    while(!feof(fp)) {
        ch = fgetc(fp) ;
        printf("%c ", ch) ;
    }

    fclose(fp) ;

    return 0 ;

}