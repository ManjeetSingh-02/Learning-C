#include <stdio.h>

int cube(int);

int main()
{

    int x = cube(3);
    printf("Cube of 3 is: %d", x);

    return 0;
}

int cube(int a)
{
    return (a * a * a);
}