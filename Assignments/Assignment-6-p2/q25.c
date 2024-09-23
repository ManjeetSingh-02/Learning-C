#include <stdio.h>

int main()
{
    int i, j, x, a[2][2] = {{1, 4}, {3, 6}}, b[2][2] = {{4, 7}, {2, 8}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            a[i][j] = 2 * a[i][j];
            b[i][j] = 2 * b[i][j];
        }
    }

    printf("Scalar Matrix Product of Matrix A by 2: ");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    printf("\nScalar Matrix Product of Matrix B by 2: ");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
    }

    return 0;
}