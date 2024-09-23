#include <stdio.h>

int main()
{
    int i, j = 4, x = 0, a[5][5] = {{1, 4, 5, 6, 7}, {2, 4, 5, 6, 7}, {3, 4, 5, 6, 7}, {4, 4, 5, 6, 7}, {5, 4, 5, 6, 7}};

    for (i = 0; i < 5; i++)
    {
        x = x + a[i][j];
        j--;
    }

    printf("Sum of Minor Diagonal Matrix is: ");
    printf("%d", x);

    return 0;
}