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
void viewrollnostudents();

int main()
{

    addstudent();
    viewrollnostudents();

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

void viewrollnostudents()
{
    int i, x;

    printf("Enter student roll no: ");
    scanf("%d", &x);

    for (i = 0; i < 3; i++)
    {
        if (s[i].rollno == x)
        {
            printf("\nLogin ID - %d", s[i].loginID);
            printf("\nRoll No - %d", s[i].rollno);
            printf("\nFirst Name - ");
            fflush(stdout);
            puts(s[i].n.fname);
            printf("\nMiddle Name - ");
            fflush(stdout);
            puts(s[i].n.mname);
            printf("\nLast Name - ");
            fflush(stdout);
            puts(s[i].n.lname);
            fflush(stdout);
            printf("\nGender - %c", s[i].gender);
            printf("\nDOB Day - %d", s[i].d.day);
            printf("\nDOB Month - ");
            fflush(stdout);
            puts(s[i].d.month);
            printf("\nDOB Year - %d", s[i].d.year);
            printf("\nEnglish Marks - %d", s[i].m.english);
            printf("\nMaths Marks - %d", s[i].m.maths);
            printf("\nComputer Science Marks - %d", s[i].m.cs);

            break;
        }
    }
}