#include <stdio.h>
#include <math.h>

struct POINT
{
    int x;
    int y;
};

int main()
{
    struct POINT P1, P2;
    int distance;

    P1.x = 6;
    P1.y = 3;
    P2.x = 2;
    P2.y = 2;

    distance = sqrt(pow((P2.x - P1.x), 2) + pow((P2.y - P1.y), 2));

    printf("Distance between (6,3) & (2,2) is: %d", distance);

    return 0;
}