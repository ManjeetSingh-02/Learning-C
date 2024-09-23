#include <stdio.h>

int main()
{
    int i, j, x, a[2][2] = {{1, 4}, {3, 6}}, b[2][2] = {{1, 4}, {3, 6}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (a[i][j] == b[i][j])
            {
                x = 0;
            }
            else
            {
                x = 1;
                break;
            }
        }
    }

    if (x == 0)
    {
        printf("Matrix are equal");
    }
    else
    {
        printf("Matrix are not equal");
    }

    return 0;
}