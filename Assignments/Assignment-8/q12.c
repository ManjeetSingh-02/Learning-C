#include <stdio.h>

void findevenodd(int, int);

int main()
{

    int a, b;

    printf("Enter Limit:");
    printf("\nEnter starting number - ");
    scanf("%d", &a);
    printf("\nEnter ending number - ");
    scanf("%d", &b);

    findevenodd(a, b);

    return 0;
}

void findevenodd(int m, int n)
{
    if (m <= n)
    {
        if (m % 2 == 0)
        {
            printf("\n%d is even", m);
        }
        else
        {
            printf("\n%d is odd", m);
        }
        findevenodd(m + 1, n);
    }
}
