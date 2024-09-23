#include <stdio.h>

void findprime(int, int);

int main()
{

    int a, b;

    printf("Enter Limit:");
    printf("\nEnter starting number - ");
    scanf("%d", &a);
    printf("\nEnter ending number - ");
    scanf("%d", &b);

    findprime(a, b);

    return 0;
}

void findprime(int m, int n)
{
    int i, j, flag;

    for (i = m; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
}
