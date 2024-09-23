#include <stdio.h>

int main()
{
    int i, j, a[5][5] = {{1, 4, 5, 6, 7}, {2, 4, 5, 6, 7}, {3, 4, 5, 6, 7}, {4, 4, 5, 6, 7}, {5, 4, 5, 6, 7}};

        printf("Original Matrix: ");
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
        for (j = i + 1; j < 5; j++)
        {
            if (i != j)
            {
                int x = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = x;
            }
        }
    }

    printf("\nTranspose of a Matrix: ");
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