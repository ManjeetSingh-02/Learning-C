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

    for (i = 0; i < 5; i++)
    {
        if (b[i] > 1)
        {
            x++;
        }
    }
    printf("Total no of Duplicate Elements are: %d", x);
    return 0;
}