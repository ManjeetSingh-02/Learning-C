#include <stdio.h>

void evenodd(int);

int main()
{

    evenodd(3);
    printf("\n");
    evenodd(4);

    return 0;
}

void evenodd(int a)
{
    if (a % 2 == 0)
    {
        printf("%d is Even", a);
    }
    else
    {
        printf("%d is Odd", a);
    }
}