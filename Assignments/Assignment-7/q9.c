#include <stdio.h>
#include <math.h>

struct DURATION
{
    int hrs;
    int min;
    int sec;
};

int main()
{
    struct DURATION D1, D2;
    int th, tm, ts;

    D1.hrs = 10;
    D1.min = 20;
    D1.sec = 50;
    D2.hrs = 5;
    D2.min = 30;
    D2.sec = 40;

    th = D1.hrs + D2.hrs;
    tm = D1.min + D2.min;
    ts = D1.sec + D2.sec;

    printf("Addition - %dHrs %dMinutes %d Seconds", th, tm, ts);

    th = D1.hrs - D2.hrs;
    tm = D1.min - D2.min;
    ts = D1.sec - D2.sec;

    printf("Subtraction - %dHrs %dMinutes %d Seconds", th, tm, ts);

    return 0;
}