#include <stdio.h>

int main()
{

    int i, j, x = 0, y = 0, a[10] = {4, 5, 10, 1, 16, 45, 23, 22, 66, 84}, b[10], c[10];

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

    for (i = 0; i < x - 1; i++)
    {
        for (j = i + 1; j < x; j++)
        {
            if (b[i] > b[j])
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    for (i = 0; i < y - 1; i++)
    {
        for (j = i + 1; j < y; j++)
        {
            if (c[i] > c[j])
            {
                int t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
        }
    }

    printf("\nSorted Even elements are: ");
    for (i = 0; i < x; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nSorted Odd elements are: ");
    for (i = 0; i < y; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}