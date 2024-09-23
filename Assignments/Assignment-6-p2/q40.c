#include <stdio.h>

int main()
{
    int i, j, x, a[5][5] = {{1, 4, 5, 6, 7}, {2, 4, 5, 6, 7}, {3, 4, 5, 6, 7}, {4, 4, 5, 6, 7}, {5, 4, 5, 6, 7}}, b[i][j];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (i != j)
            {
                int x = b[i][j];
                b[i][j] = b[j][i];
                b[j][i] = x;
            }
        }
    }

    x = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] != b[i][j])
            {
                x = 0;
                break;
            }
        }
    }

    if (x == 1)
    {
        printf("Symmetrix Matrix");
    }
    else
    {
        printf("Not a Symmetrix Matrix");
    }

    return 0;
}