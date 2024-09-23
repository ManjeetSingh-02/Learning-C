#include <stdio.h>

void sumnn(int, int);

int sum = 0;
int main()
{

    int a, b;

    printf("Enter Limit:");
    printf("\nEnter starting number - ");
    scanf("%d", &a);
    printf("\nEnter ending number - ");
    scanf("%d", &b);

    sumnn(a, b);

    printf("Sum is - %d", sum);

    return 0;
}

void sumnn(int m, int n)
{
    if (m <= n)
    {
        sum = sum + m;
        sumnn(m + 1, n);
    }
}