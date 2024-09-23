#include <stdio.h>

int main()
{
    int i, j, x = 0, a[5][5] = {{1, 4, 5, 6, 7}, {2, 4, 5, 6, 7}, {3, 4, 5, 6, 7}, {4, 4, 5, 6, 7}, {5, 4, 5, 6, 7}};
    
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            x = x + a[i][j];
        }
    }

    printf("\nSum of Upper Triangle Matrix: ");
    printf("%d", x);

    return 0;
}