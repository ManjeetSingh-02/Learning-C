#include <stdio.h>

int findpower(int, int);

int main()
{

    int a, b, ans;

    printf("Enter exponent - ");
    scanf("%d", &a);
    printf("Enter power - ");
    scanf("%d", &b);

    ans = findpower(a, b);

    printf("Ans - %d", ans);

    return 0;
}

int findpower(int x, int y)
{
    if (y != 0)
    {
        return (x * findpower(x, y - 1));
    }
    else
    {
        return 1;
    }
}