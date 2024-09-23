#include <stdio.h>

void findreverse(int);

int main()
{

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse  - ");
    findreverse(n);

    return 0;
}

void findreverse(int x)
{
    if (x != 0)
    {
        int y = x % 10;
        printf("%d", y);
        findreverse(x / 10);
    }
}
