#include <stdio.h>

int checkpalindrome(int, int);
int ans = 0;

int main()
{

    int x, z;

    printf("Enter any Number: ");
    scanf("%d", &x);

    z = checkpalindrome(x, x);

    if (z == 1)
    {
        printf("\nPalindrome Number");
    }
    else
    {
        printf("\nNot a Palindrome Number");
    }

    return 0;
}

int checkpalindrome(int a, int b)
{
    if (a > 0)
    {
        int x = a % 10;
        ans = (ans * 10) + x;
        a = a / 10;
        checkpalindrome(a, b);
    }

    if (ans == b)
    {
        return 1;
    }
    if (a == 0)
    {
        return 0;
    }
}
