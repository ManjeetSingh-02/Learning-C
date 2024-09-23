#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct HOTEL
{
    char name[10];
    struct ADDRESS
    {
        char area[10];
        char city[10];
        char state[10];
    } A;
    char grade;
    int rooms;
    int roomcharges;
} H1, H2, H3;

void gradehotels();
void rchotels();

int main()
{
    strcpy(H1.name, "Aaaa");
    strcpy(H1.A.area, "dsdfd");
    strcpy(H1.A.city, "dsfds");
    strcpy(H1.A.state, "ssdfd");
    H1.grade = 'A';
    H1.rooms = 10;
    H1.roomcharges = 100;

    strcpy(H2.name, "Bbbb");
    strcpy(H2.A.area, "fdfd");
    strcpy(H2.A.city, "sgbdf");
    strcpy(H2.A.state, "weghfd");
    H2.grade = 'A';
    H2.rooms = 7;
    H2.roomcharges = 50;

    strcpy(H3.name, "Cccc");
    strcpy(H3.A.area, "werghbd");
    strcpy(H3.A.city, "sfdgfhfgd");
    strcpy(H3.A.state, "wdgrfd");
    H3.grade = 'C';
    H3.rooms = 5;
    H3.roomcharges = 20;

    gradehotels();
    rchotels();
}

void gradehotels()
{
    int i = 0;
    printf("\nHotels of A grade are:");

    if (H1.grade == 'A')
    {
        printf("\nHotel Name - ");
        fflush(stdout);
        puts(H1.name);
        i = 1;
    }
    if (H2.grade == 'A')
    {
        printf("\nHotel Name - ");
        fflush(stdout);
        puts(H2.name);
        i = 1;
    }
    if (H3.grade == 'A')
    {
        printf("\nHotel Name - ");
        fflush(stdout);
        puts(H3.name);
        i = 1;
    }
    if (i == 0)
    {
        printf("\nNo hotels are of A grade");
    }
}

void rchotels()
{
    int i = 0, x;

    printf("\nEnter a specific room charge value: ");
    scanf("%d", &x);

    if (H1.roomcharges <= x)
    {
        printf("\nHotel Name - ");
        fflush(stdout);
        puts(H1.name);
        i = 1;
    }
    if (H2.roomcharges <= x)
    {
        printf("\nHotel Name - ");
        fflush(stdout);
        puts(H2.name);
        i = 1;
    }
    if (H3.roomcharges <= x)
    {
        printf("\nHotel Name - ");
        fflush(stdout);
        puts(H3.name);
        i = 1;
    }
    if (i == 0)
    {
        printf("\nNo hotels are of room charges less than %d", x);
    }
}