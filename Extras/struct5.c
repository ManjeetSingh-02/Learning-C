#include <stdio.h>

struct Student {
    int id ;
    char name[10] ;
    struct {
        int f ;
        char s[5] ;
    } ; // Anonymous Structure
} var1 ; // Global Nested Structure

struct {
    int id ;
    char name[10] ;
} v1 = {101 , 'ASASA'} ; // Global Anonymous Structure

int main() {

    struct A {
        int id ;
        char name[10] ;
        struct {
            int x ;
            char t[5] ;
        } ; // Anonymous Structure
    } var2 ; // Local Nested Structure

    struct {
        int id ;
        char name[10] ;
    } v2 = {102 , 'SASAS'} ; // Local Anonymous Structure

    return 0 ;
}