#include <stdio.h>
#include <math.h>

int main()
{

    int i, arr[4], dec = 0;
    char ans[16];

    printf("Enter a Binary Number of 4-bits:\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 4; i++)
    {
        dec = dec + (arr[i] * pow(2, 3 - i));
    }

    for (i = 0; i < 16; i++)
    {
        ans[i] = '0';
    }

    i = 15;
    while (dec > 0)
    {
        int x = dec % 16;
        if (x <= 9)
        {
            ans[i] = (char)(48 + x);
        }
        else
        {
            if (x == 10)
            {
                ans[i] = 'A';
            }
            else if (x == 11)
            {
                ans[i] = 'B';
            }
            else if (x == 12)
            {
                ans[i] = 'C';
            }
            else if (x == 13)
            {
                ans[i] = 'D';
            }
            else if (x == 14)
            {
                ans[i] = 'E';
            }
            else
            {
                ans[i] = 'F';
            }
        }
        dec = dec / 16;
        i--;
    }

    for (i = 0; i < 16; i++)
    {
        printf("%c", ans[i]);
    }

    return 0;
}