#include <stdio.h>

int main()
{
    int i, j, a[5][5] = {{1, 4, 5, 6, 7}, {2, 4, 5, 6, 7}, {3, 4, 5, 6, 7}, {4, 4, 5, 6, 7}, {5, 4, 5, 6, 7}};

    printf("\nUpper Triangle Matrix: ");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = i; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}