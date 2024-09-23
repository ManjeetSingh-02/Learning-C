#include <stdio.h>

int main()
{

    int i, x, y, a[5] = {3, 5, 1, 24, 12};

    printf("Enter element to search in array: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++)
    {
        if (a[i] == x)
        {
            y = i + 1;
            break;
        }
        y = -1;
    }

    if (y == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position: %d", y);
    }

    return 0;
}