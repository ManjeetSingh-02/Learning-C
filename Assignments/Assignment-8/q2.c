#include <stdio.h>

float dia(float);
float circ(float);
float area(float);

float main()
{

    float x = dia(3.0);
    float y = circ(3.0);
    float z = area(3.0);

    printf("Diameter of triangle: %.2f", x);
    printf("\nCircumference of triangle: %.2f", y);
    printf("\nArea of triangle: %.2f", z);

    return 0;
}

float dia(float r)
{
    return (2 * r);
}

float circ(float r)
{
    return (2 * 3.14 * r);
}

float area(float r)
{
    return (r * 3.14 * r);
}