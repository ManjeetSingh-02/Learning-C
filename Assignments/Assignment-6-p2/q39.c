#include <stdio.h>

int main()
{
    int i, j, c_zero = 0, c_non_zero = 0, a[5][5] = {{1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 1}};

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 0)
            {
                c_zero++;
            }
            else
            {
                c_non_zero++;
            }
        }
    }

    if (c_zero > c_non_zero)
    {
        printf("Sparse Matrix");
    }
    else
    {
        printf("Not an Sparse Matrix");
    }

    return 0;
}