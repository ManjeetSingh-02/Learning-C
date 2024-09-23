#include <stdio.h>

struct Student {
    int id ;
    char name[10] ;
    int marks ;
} ;

int main() {
    struct Student s[3] = {
        {101 , "A" , 70} ,
        {102 , "B" , 80} ,
        {103 , "C" , 90}
    } ;
    struct Student *ptr[3] ; // Array of Pointer to Array of Structure

    ptr[0] = &s[0] ;
    ptr[1] = &s[1] ;
    ptr[2] = &s[2] ;

    printf("\n%d\n%s\n%d" , ptr[0]->id , ptr[0]->name , ptr[0]->marks) ;
    printf("\n%d\n%s\n%d" , ptr[1]->id , ptr[1]->name , ptr[1]->marks) ;
    printf("\n%d\n%s\n%d" , ptr[2]->id , ptr[2]->name , ptr[2]->marks) ;

    return 0 ;
}