// If we are not mentioning , by default it is padding else packing
// Always define structure members from smaller to bigger data type

#include <stdio.h>
#pragma pack(1) // 1 - True , 0 - False

struct Student {
    char b ;
    char c ;
    int a ;
} ;

int main() {

    struct Student s1 ;
    printf("%d", sizeof(s1)) ;
    return 0 ;
}