#include <stdio.h>

void findevenodd(int, int);

int evensum = 0, oddsum = 0;

int main()
{

    int a, b;

    printf("Enter Limit:");
    printf("\nEnter starting number - ");
    scanf("%d", &a);
    printf("\nEnter ending number - ");
    scanf("%d", &b);

    findevenodd(a, b);

    printf("\nSum of all even numbers - %d", evensum);
    printf("\nSum of all odd numbers - %d", oddsum);

    return 0;
}

void findevenodd(int m, int n)
{
    if (m <= n)
    {
        if (m % 2 == 0)
        {
            evensum = evensum + m;
        }
        else
        {
            oddsum = oddsum + m;
        }
        findevenodd(m + 1, n);
    }
}
