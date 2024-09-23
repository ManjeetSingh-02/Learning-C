#include <stdio.h>

int main()
{
    int i, x, a[5] = {12, 4, 6, 76, 11};

    x = a[4];

    for (i = 4; i >= 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = x;

    printf("After Right Rotation: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}