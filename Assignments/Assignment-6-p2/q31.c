#include <stdio.h>

int main()
{
    int i, j, a[5][5] = {{1, 4, 5, 6, 7}, {2, 4, 5, 6, 7}, {3, 4, 5, 6, 7}, {4, 4, 5, 6, 7}, {5, 4, 5, 6, 7}};

    printf("Before Interchange of Diagonals: ");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            if (j == 5 - 1 - i)
            {
                int x = a[i][i];
                a[i][i] = a[i][j];
                a[i][j] = x;
            }
        }
    }

    printf("\nAfter Interchange of Diagonals: ");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}