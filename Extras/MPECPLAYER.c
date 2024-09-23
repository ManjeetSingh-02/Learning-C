#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char sname[20] ;

    printf("Enter song name: ") ;
    gets(sname) ;

    system(strcat("start wmplayer", sname)) ;
    return 0 ;
}