#include <stdio.h>

// typedef struct {

// } FILE ; <---------------- Anonymous Structure for FILE in STDIO.H

int main() {

    FILE *fp = NULL ;

    fp = fopen("a.txt", "w") ;

    if (fp == NULL) {
        printf("File not created successfully") ;
    }
    else {
        printf("File created successfully") ;
        fputc('D', fp) ; // write a character in file
        fputs("234sfdsdfgfbdfdsegrfdergrdfsegrdfsderfdcserfdcdsergf", fp) ; // write a string in file
    }

    fclose(fp) ; // close the file and remove the pointer

    return 0 ;
}