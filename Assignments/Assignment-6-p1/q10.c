#include <stdio.h>

int main()
{

    int i, x, a[10] = {3, 5, 1, 24, 12};

    printf("Enter position of element to delete in array: ");
    scanf("%d", &x);

    x--;
    for (i = x; i < 10; i++)
    {
        a[i] = a[i + 1];
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}