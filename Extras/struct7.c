#include <stdio.h>

struct Student {
    int id ;
    char name[10] ;
    int marks ;
} ;

int main() {
    struct Student s1 = {101 , 'Manjeet' , 80} ;
    struct Student *ptr = &s1 ; // Pointer with Structure

    printf("%d\n%s\n%d", ptr->id , ptr->name , ptr->marks) ;

    return 0 ;
}

// . and -> are Special Operators and they are called Member Selection Operator