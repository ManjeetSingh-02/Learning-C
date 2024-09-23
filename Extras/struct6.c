#include <stdio.h>

struct Student {
    int id ;
    char name[10] ;
    int marks ;
} ;

int main() {
    struct Student s[5] ; // Array with Structure
    int i ;

    for(i = 0 ; i < 5 ; i++) {
        printf("Enter ID of Student %d: ", i+1) ;
        scanf("%d", &s[i].id) ;
        printf("Enter Name of Student %d: ", i+1) ;
        scanf("%s", s[i].name) ;
        printf("Enter Marks of Student %d: ", i+1) ;
        scanf("%d", &s[i].marks) ;
    }

    for(i = 0 ; i < 5 ; i++) {
        printf("\nID of Student %d: %d", i+1 , s[i].id) ;
        printf("\nName of Student %d: %s", i+1 , s[i].name) ;
        printf("\nMarks of Student %d: %d", i+1 , s[i].marks) ;
    }

    return 0 ;
}