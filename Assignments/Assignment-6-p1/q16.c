#include <stdio.h>

int main()
{

    int i, a[5] = {4, 5, 10, 1, 16}, b[5];

    for (i = 0; i < 5; i++)
    {
        b[i] = a[4 - i];
    }

    printf("Reverse of array is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}