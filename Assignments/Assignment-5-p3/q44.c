#include <stdio.h>
#include <math.h>

int main()
{

    int i, arr[4], answ = 0, oct, x;
    char ans[16];

    printf("Enter octal number: ");
    scanf("%d", &oct);

    i = 0;
    while (oct > 0)
    {
        x = oct % 10;
        answ = answ + (x * pow(8, i));
        oct = oct / 10;
        i++;
    }

    for (i = 0; i < 16; i++)
    {
        ans[i] = '0';
    }

    i = 15;
    while (answ > 0)
    {
        int x = answ % 16;
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
        answ = answ / 16;
        i--;
    }

    for (i = 0; i < 16; i++)
    {
        printf("%c", ans[i]);
    }

    return 0;
}