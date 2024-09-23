#include <stdio.h>

int gcd(int, int);

int main()
{
    int x = 45, y = 18;

    printf("GCD of %d and %d is: %d", x, y, gcd(x, y));

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}