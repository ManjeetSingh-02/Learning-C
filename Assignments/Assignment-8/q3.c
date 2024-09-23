#include <stdio.h>

int min(int, int);
int max(int, int);

int main()
{

    int x = min(3, 4);
    int y = max(3, 4);
    printf("Minimum : %d", x);
    printf("\nMaximum : %d", y);

    return 0;
}

int min(int a, int b)
{
    int res = a > b ? b : a;
    return res;
}

int max(int a, int b)
{
    int res = a > b ? a : b;
    return res;
}