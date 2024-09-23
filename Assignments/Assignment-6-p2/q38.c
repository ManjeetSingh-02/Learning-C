#include <stdio.h>

int main()
{
    int i, j, x, a[5][5] = {{1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 1}};

    for (i = 0; i < 5; i++)
    {
        x = 1;
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    x = 0;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    x = 0;
                }
            }
        }
    }

    if (x == 1)
    {
        printf("Identity Matrix");
    }
    else
    {
        printf("Not an Identity Matrix");
    }

    return 0;
}