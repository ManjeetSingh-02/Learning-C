#include <stdio.h>

struct A {
    char a ;
} ;

struct B { // SELF REFRENCIAL STRUCTURE
    int a ;
    struct A b ; // Structure using structure & Allowed (Normal Variable)
    struct A *c ; // Structure using structure & Allowed (Pointer)
    // struct B d ; Not Allowed SELF type of variable because size of structure is depend on member - ERROR
    struct B *d ; // Allowed SELF type of pointer because pointer size does not depend on datatype
} v1 ;

// Structure used to implement LINKED LIST - Self Refrencial Structure