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
    struct Student (*ptr)[3] ; // Pointer to Array of Structure

    ptr = &s ;

    printf("\n%d\n%s\n%d" , ptr[0]->id , ptr[0]->name , ptr[0]->marks) ;
    printf("\n%d\n%s\n%d" , (ptr[0]+1)->id , (ptr[0]+1)->name , (ptr[0]+1)->marks) ;
    printf("\n%d\n%s\n%d" , (ptr[0]+2)->id , (ptr[0]+2)->name , (ptr[0]+2)->marks) ;

    return 0 ;
}