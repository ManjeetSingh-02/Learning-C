#include <stdio.h>

int main()
{

    int i, x, y, a[10] = {3, 5, 1, 24, 12};

    printf("Enter element to insert in array: ");
    scanf("%d", &x);

    printf("Enter position of element to insert in array: ");
    scanf("%d", &y);

    for (i = 9; i >= y; i--)
    {
        a[i] = a[i - 1];
    }
    a[y - 1] = x;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}