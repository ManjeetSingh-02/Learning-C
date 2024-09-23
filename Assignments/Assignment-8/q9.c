#include <stdio.h>

void findperfect(int, int);

int main()
{

    int a, b;

    printf("Enter Limit:");
    printf("\nEnter starting number - ");
    scanf("%d", &a);
    printf("\nEnter ending number - ");
    scanf("%d", &b);

    findperfect(a, b);

    return 0;
}

void findperfect(int m, int n)
{
    int i, j, ans;

    for (i = m; i <= n; i++)
    {
        ans = 0;
        for (j = 1; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                ans = ans + j;
            }
        }

        if (ans == i)
        {
            printf("%d ", i);
        }
    }
}
