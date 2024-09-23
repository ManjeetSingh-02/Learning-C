#include <stdio.h>

struct fraction
{
    int numerator;
    int denominator;
};

int compare(struct fraction, struct fraction);

int main()
{
    struct fraction f1, f2;
    int a;

    f1.numerator = 5;
    f1.denominator = 2;

    f2.numerator = 5;
    f2.denominator = 3;

    a = compare(f1, f2);

    if (a == 0)
    {
        printf("Fractions are Equal");
    }
    else if (a == 1)
    {
        printf("Fraction 1 is greater");
    }
    else
    {
        printf("Fraction 2 is greater");
    }

    return 0;
}

int compare(struct fraction f1, struct fraction f2)
{
    float x, y;

    x = f1.numerator / f1.denominator;
    y = f2.numerator / f2.denominator;

    if (x == y)
    {
        return 0;
    }
    else if (x < y)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}