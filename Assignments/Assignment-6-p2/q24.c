#include <stdio.h>

int main()
{
    int i, j, x, a[2][2] = {{1, 4}, {3, 6}}, b[2][2] = {{4, 7}, {2, 8}}, ans[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            ans[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("After Subtraction: ");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", ans[i][j]);
        }
    }

    return 0;
}