#include <stdio.h>

// typedef struct {
//     int id ;
//     char name[20] ;
// } St ; <------------- Anonymous Structure Alias

typedef struct Student {
    int id ;
    char name[20] ;
} St ;

// typedef struct Student St ;

int main() {

    // typedef struct Student St ;
    St s1 = {101 , 'A'} ;
    printf("%d , %s", s1.id , s1.name) ;
    return 0 ;
}