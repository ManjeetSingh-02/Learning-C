#include <stdio.h>

int main()
{
    int i, j, x, y, a[5][5] = {{1, 4, 5, 6, 7}, {2, 1, 5, 6, 7}, {3, 4, 1, 6, 7}, {4, 4, 5, 1, 7}, {5, 4, 5, 6, 1}};

    for (i = 0; i < 5; i++)
    {
        x = 0;
        y = 0;
        for (j = 0; j < 5; j++)
        {
            x = x + a[i][j];
            y = y + a[j][i];
        }
        printf("\nSum of R[%d] is: %d", i, x);
        printf("\nSum of C[%d] is: %d", i, y);
    }

    return 0;
}