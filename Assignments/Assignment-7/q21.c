#include <stdio.h>

struct POINT
{
    int x;
    int y;
};

int main()
{
    struct POINT P;

    P.x = 10;
    P.y = -4;

    if (P.x > 0 && P.y > 0)
    {
        printf("Quadrant 1");
    }
    else if (P.x < 0 && P.y > 0)
    {
        printf("Quadrant 2");
    }
    else if (P.x < 0 && P.y < 0)
    {
        printf("Quadrant 3");
    }
    else
    {
        printf("Quadrant 4");
    }
}