#include <stdio.h>

int main()
{
    int i, j, x = 1, y = 1, det, a[2][2] = {{7, 4}, {5, 6}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == j)
            {
                x = x * a[i][j];
            }
            else
            {
                y = y * a[i][j];
            }
        }
    }

    det = x - y;

    printf("Determinant of a matrix is: %d", det);

    return 0;
}