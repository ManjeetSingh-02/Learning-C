#include <stdio.h>

void findsum(int);
int sum = 0;

int main()
{

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    findsum(n);
    printf("Sum  - %d", sum);

    return 0;
}

void findsum(int x)
{
    if (x != 0)
    {
        int y = x % 10;
        sum = sum + y;
        findsum(x / 10);
    }
}
