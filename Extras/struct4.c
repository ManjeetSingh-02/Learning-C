#include <stdio.h>

struct Student {
    int id ;
    char name[10] ;
    struct Date {
        int DD , MM , YY ;
    };
    struct Date DOB ; // Nested Structure
};

int main() {
    struct Student s1 = {101 , "A" , 17 , 03 , 2005} ;
    
    printf("S1 - %d , %s , %d/%d/%d\n", s1.id , s1.name , s1.DOB.DD , s1.DOB.MM , s1.DOB.YY) ;
}