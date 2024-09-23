#include <stdio.h>

void findstrong(int, int);
int fact(int);

int main()
{

    int a, b;

    printf("Enter Limit:");
    printf("\nEnter starting number - ");
    scanf("%d", &a);
    printf("\nEnter ending number - ");
    scanf("%d", &b);

    findstrong(a, b);

    return 0;
}

void findstrong(int m, int n)
{
    int i, a, ans, x, y;

    for (i = m; i <= n; i++)
    {
        a = i;
        ans = 0;

        while (a > 0)
        {
            y = a % 10;
            x = fact(y);
            ans = ans + x;
            a = a / 10;
        }

        if (ans == i)
        {
            printf("%d ", ans);
        }
    }
}

int fact(int n)
{
    int j, k = 1;

    for (j = n; j >= 1; j--)
    {
        k = k * j;
    }

    return k;
}