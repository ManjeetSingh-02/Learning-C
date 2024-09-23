#include <stdio.h>

int main()
{
    int i, x, a[5] = {12, 4, 6, 76, 11};

    x = a[0];

    for (i = 1; i < 5; i++)
    {
        a[i - 1] = a[i];
    }
    a[4] = x;

    printf("After Left Rotation: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}