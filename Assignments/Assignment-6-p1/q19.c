#include <stdio.h>

int main()
{

    int i, j, a[5] = {3, 5, 1, 24, 12};

    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("Ascending Order: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}