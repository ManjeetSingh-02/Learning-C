#include <stdio.h>

struct TIME
{
    int hr;
    int min;
    int sec;
};

int main()
{
    struct TIME start_time, end_time;
    int x, y, z;

    print("Enter starting time:");
    printf("\nEnter Hr - ");
    scanf("%d", &start_time.hr);
    printf("\nEnter Min - ");
    scanf("%d", &start_time.min);
    printf("\nEnter Sec - ");
    scanf("%d", &start_time.sec);

    print("Enter ending time:");
    printf("\nEnter Hr - ");
    scanf("%d", &end_time.hr);
    printf("\nEnter Min - ");
    scanf("%d", &end_time.min);
    printf("\nEnter Sec - ");
    scanf("%d", &end_time.sec);

    if (start_time.hr > end_time.hr)
    {
        x = start_time.hr - end_time.hr;
    }
    else
    {
        x = end_time.hr - start_time.hr;
    }

    if (start_time.min > end_time.min)
    {
        y = start_time.min - end_time.min;
    }
    else
    {
        y = end_time.min - start_time.min;
    }

    if (start_time.sec > end_time.sec)
    {
        z = start_time.sec - end_time.sec;
    }
    else
    {
        z = end_time.sec - start_time.sec;
    }

    if (x == 2 && y == 30 && z == 45)
    {
        printf("Time to Relax");
    }
    else
    {
        printf("Hurry up Please....");
    }
    return 0;
}