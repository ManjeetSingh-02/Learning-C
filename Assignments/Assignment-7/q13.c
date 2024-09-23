

#include <stdio.h>

struct DATE
{
    int day;
    int month;
    int year;
} D;

void readandvalidatedata();
void displaydata();

int main()
{
    readandvalidatedata();
    return 0;
}

void readandvalidatedata()
{
    int d, m, y;
    printf("Enter Day - ");
    scanf("%d", &d);

    if (d > 31)
    {
        printf("No month has more than 31 days");
    }
    else
    {
        printf("Enter Month - ");
        scanf("%d", &m);

        if (m > 12)
        {
            printf("No year has more than 12 months");
        }
        else if (d == 29 && m != 2)
        {
            printf("You entered 29 days which can be only possible on Feb(2) month");
        }
        else if ((d == 31) && (((m == 4) || (m == 6)) || ((m == 9) || (m == 11))))
        {
            printf("You entered 31 days which cannot be possible on April(4) or June(6) or September(9) or November(11) month");
        }
        else if ((d == 30) && (((m != 4) || (m != 6)) || ((m != 9) || (m != 11))))
        {
            printf("You entered 30 days which can be only possible on April(4) or June(6) or September(9) or November(11) month");
        }
        else
        {
            printf("Enter Year - ");
            scanf("%d", &y);

            if (d == 29 && m == 2)
            {
                if ((y % 4 == 0) && ((y % 400 == 0) || (y % 100 != 0)))
                {
                    D.day = d;
                    D.month = m;
                    D.year = y;
                    displaydata();
                }
                else
                {
                    printf("You entered 29 days & Feb month but the year is not a leap year");
                }
            }
            else
            {
                D.day = d;
                D.month = m;
                D.year = y;
                displaydata();
            }
        }
    }
}

void displaydata()
{
    printf("Here are the date you entered:");
    printf("\nDay - %d", D.day);
    printf("\nMonth - %d", D.month);
    printf("\nYear - %d", D.year);
}