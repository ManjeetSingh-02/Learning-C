#include <stdio.h>

int main()
{

    int i, x = 0, y = 0, a[10] = {4, 5, 10, 1, 16, 45, 23, 22, 66, 84}, b[10], c[10];

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[x] = a[i];
            x++;
        }
        else
        {
            c[y] = a[i];
            y++;
        }
    }

    printf("\nEven elements are: ");
    for (i = 0; i < x; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nOdd elements are: ");
    for (i = 0; i < y; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}