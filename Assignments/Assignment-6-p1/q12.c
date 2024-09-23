#include <stdio.h>

int main()
{

    int i, j, a[5] = {12, 5, 7, 34, 7}, b[5] = {0, 0, 0, 0, 0};

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

    printf("Unique Elements are:\n");
    for (i = 0; i < 5; i++)
    {
        if (b[i] == 1)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}