#include <stdio.h>

struct Student {
    int id ;
    char name[10] ;
};

int main() {
    struct Student s1 ;

    printf("Enter id: ") ;
    scanf("%d", &s1.id) ;
    printf("Enter name: ") ;
    scanf("%s", &s1.name) ;
    
    printf("S1 - %d , %s\n", s1.id , s1.name) ;
}