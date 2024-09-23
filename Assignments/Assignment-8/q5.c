#include <stdio.h>

int main()
{
    int i, n, flag = 0, ans = 0, y;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\nPrime number");
    }
    else
    {
        printf("\nNot a prime number");
    }

    y = n;
    while (y > 0)
    {
        int x = y % 10;
        ans = (x * x * x) + ans;
        y = y / 10;
    }
    if (ans == n)
    {
        printf("\nIt's a Armstrong Number");
    }
    else
    {
        printf("\nIt's not a Armstrong Number");
    }

    ans = 0;
    for (i = 1; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            ans = ans + i;
        }
    }

    if (ans == n)
    {
        printf("\nIt's a Perfect Number");
    }
    else
    {
        printf("\nIt's not a Perfect Number");
    }

    return 0;
}