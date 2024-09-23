#include <stdio.h>

void findarm(int, int);

int main()
{

    int a, b;

    printf("Enter Limit:");
    printf("\nEnter starting number - ");
    scanf("%d", &a);
    printf("\nEnter ending number - ");
    scanf("%d", &b);

    findarm(a, b);

    return 0;
}

void findarm(int m, int n)
{
    int i, a, ans, x;

    for (i = m; i <= n; i++)
    {
        a = i;
        ans = 0;

        while (a > 0)
        {
            x = a % 10;
            ans = ans + (x * x * x);
            a = a / 10;
        }

        if (ans == i)
        {
            printf("%d ", i);
        }
    }
}
