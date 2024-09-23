#include <stdio.h>

void findnn(int, int);

int main()
{

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    findnn(1, n);

    return 0;
}

void findnn(int x, int y)
{
    if (x <= y)
    {
        printf("%d ", x);
        findnn(x + 1, y);
    }
}