#include <stdio.h>

struct Student1 {
    char gender ;
    int id ;
    long long int c ;
} ;

union Student2 {
    char gender ;
    int id ;
    long long int c ;
} ;

int main() {

    printf("%d", sizeof(struct Student1)) ;
    printf("%d", sizeof(union Student2)) ;

    struct Student1 s1 = {'M' , 101 , 82} ;
        
    printf("%c , %d , %d", s1.gender , s1.id , s1.c) ;

    union Student2 s2 ;

    s2.gender = 'M' ;
    printf("%c", s2.gender) ;

    s2.id = 102 ;
    printf("%d", s2.id) ;

    s2.c = 82 ;
    printf("%d", s2.c) ;

    return 0  ;
}