#include <stdio.h>

struct STRUCTURE
{
    int x;
    float y;
    double z;
};

union UNION
{
    int x;
    float y;
    double z;
};

int main()
{
    struct STRUCTURE S;
    union UNION U;

    printf("Members of STRUCTURE and UNION are:");
    printf("\nINTEGER");
    printf("\nFLOAT");
    printf("\nDOUBLE");

    printf("\nSize of Structure - %d", sizeof(S));
    printf("\nSize of Union - %d", sizeof(U));
}