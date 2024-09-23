#include <stdio.h>
#include <math.h>

struct HEIGHT
{
    int feet;
    int inch;
};

int main()
{
    struct HEIGHT H1, H2;
    int tf, ti;

    H1.feet = 6;
    H1.inch = 2;
    H2.feet = 5;
    H2.inch = 4;

    tf = H1.feet + H2.feet;
    ti = H1.inch + H2.inch;

    printf("Addition - %dFeet %dInches", tf, ti);

    tf = H1.feet - H2.feet;
    ti = H1.inch - H2.inch;

    printf("Subtraction - %dFeet %dInches", tf, ti);

    return 0;
}