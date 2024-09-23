#include <stdio.h>

struct Student {
    int id ;
    char name[10] ;
};

int main() {
    struct Student s1 = {101 , "A"} ;
    struct Student s2 = {102 , "B"} ;
    struct Student s3 ;
    s3 = s2 ;

    printf("S1 - %d , %s\n", s1.id , s1.name) ;
    printf("S2 - %d , %s\n", s2.id , s2.name) ;
    printf("S3 - %d , %s\n", s3.id , s3.name) ;
}