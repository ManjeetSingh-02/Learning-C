#include <stdio.h>

int main()
{

    int i, a[5] = {4, 5, 10, 1, 16}, b[5] = {2, 54, 6, 44, 8}, c[10];

    for (i = 0; i < 5; i++)
    {
        c[i] = a[i];
        c[i + 5] = b[i];
    }

    printf("After Merging: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}