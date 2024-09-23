#include <stdio.h>

struct DATE
{
    int day;
    int month;
    int year;
};

int main()
{

    struct DATE D;

    printf("Enter day: ");
    scanf("%d", &D.day);
    printf("Enter month: ");
    scanf("%d", &D.month);
    printf("Enter year: ");
    scanf("%d", &D.year);

    if ((D.year % 4 == 0) && ((D.year % 400 == 0) || (D.year % 100 != 0)))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}