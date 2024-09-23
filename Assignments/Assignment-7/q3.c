#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STUDENT
{
    int loginID;
    int rollno;
    struct NAME
    {
        char fname[10];
        char mname[10];
        char lname[10];
    } n;
    char gender;
    struct DOB
    {
        int day;
        char month[10];
        int year;
    } d;
    struct MARKS
    {
        int english;
        int maths;
        int cs;
    } m;
} s[3];

void addstudent();
void avgmarks();

int main()
{

    addstudent();
    avgmarks();

    return 0;
}

void addstudent()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\n\nEnter following details of student %d:\n", i + 1);
        printf("Login ID - ");
        scanf("%d", &s[i].loginID);
        printf("Roll No - ");
        scanf("%d", &s[i].rollno);
        printf("First Name - ");
        fflush(stdin);
        gets(s[i].n.fname);
        printf("Middle Name - ");
        fflush(stdin);
        gets(s[i].n.mname);
        printf("Last Name - ");
        fflush(stdin);
        gets(s[i].n.lname);
        printf("Gender - ");
        fflush(stdin);
        scanf("%c", &s[i].gender);
        printf("DOB Day - ");
        scanf("%d", &s[i].d.day);
        printf("DOB Month - ");
        fflush(stdin);
        gets(s[i].d.month);
        printf("DOB Year - ");
        scanf("%d", &s[i].d.year);
        printf("English Marks - ");
        scanf("%d", &s[i].m.english);
        printf("Maths Marks - ");
        scanf("%d", &s[i].m.maths);
        printf("Computer Science Marks - ");
        scanf("%d", &s[i].m.cs);

        printf("Student Added");
    }
}

void avgmarks()
{
    int i, y = 0;

    for (i = 0; i < 3; i++)
    {
        int x = s[i].m.english + s[i].m.maths + s[i].m.cs;
        x = x / 3;
        y = y + x;
        printf("\nAverage marks of student %d is: %d", i + 1, x);
    }
    y = y / 3;
    printf("\nAverage marks of class is: %d", y);
}