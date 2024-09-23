#include <stdio.h>

int fibo(int);

int main()
{
    int a;

    printf("Enter a num: ");
    scanf("%d", &a);

    printf("Fibonacci of %dth term - %d", a, fibo(a));

    return 0;
}

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}