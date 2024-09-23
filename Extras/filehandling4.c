#include <stdio.h>

int main() {

    FILE *fp = NULL ;

    fp = fopen("a.txt", "w") ;

    if (fp == NULL) {
        printf("File not created successfully") ;
    }
    else {
        char ch ;

        printf("File created successfully") ;
        printf("\nPress @ if want to terminate or\nEnter your text: ") ;
        ch = getche() ;
        while(ch != '@') {
            fputc(ch, fp) ;
            ch = getche() ;
        }
    }

    fclose(fp) ;
    
    return 0 ;

}