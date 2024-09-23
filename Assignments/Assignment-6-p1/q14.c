#include <stdio.h>

int main()
{

    int i, j, x = 0, a[5] = {12, 7, 5, 5, 7}, b[5] = {0, 0, 0, 0, 0};

    for (i = 0; i < 5; i++)
    {
        if (b[i] != -1)
        {
            int x = a[i];
            b[i]++;
            for (j = i + 1; j < 5; j++)
            {
                if (x == a[j])
                {
                    b[i]++;
                    b[j] = -1;
                }
            }
        }
    }

    x = 0;
    for (i = 0; i < 5; i++)
    {
        if (b[i] == -1)
        {
            x++;
            for (j = i; j < 5; j++)
            {
                a[i] = a[i + 1];
            }
        }
    }

    printf("After Deleting Duplicate Elements:\n");
    for (i = 0; i < 5 - x; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}