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

void selectmenu();
void addstudent();
void viewallstudents();
void viewperstudents();
void viewdobstudents();

int main()
{

    selectmenu();

    return 0;
}

void selectmenu()
{
    int n;

    printf("\n1. Add Student Details\n");
    printf("2. View All Students Details\n");
    printf("3. View Students who have secured less than given percentage of the aggregate\n");
    printf("4. View Student details based on given Date of Birth\n");
    printf("Enter except 1-4 to exit\n");
    printf("Select from the following menu: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        addstudent();
        break;
    case 2:
        viewallstudents();
        break;
    case 3:
        viewperstudents();
        break;
    case 4:
        viewdobstudents();
        break;
    default:
        printf("Wrong Input");
    }
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
    selectmenu();
}

void viewallstudents()
{
    int i;

    for (i = 0; i < 3; i++)
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
    }
}

void viewperstudents()
{
    int i, x;

    printf("\nStudents who scored 40%% less than aggregate are:\n");
    for (i = 0; i < 3; i++)
    {
        int total = s[i].m.english + s[i].m.maths + s[i].m.cs;
        if (total < 120)
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
        }
    }
}

void viewdobstudents()
{
    int i, dobday, dobyear;
    char dobmonth[10];

    printf("\nEnter student DOB day: ");
    scanf("%d", &dobday);

    printf("\nEnter student DOB day: ");
    fflush(stdin);
    gets(dobmonth);

    printf("\nEnter student DOB year: ");
    scanf("%d", &dobyear);

    for (i = 0; i < 3; i++)
    {
        if (dobday == s[i].d.day && strcmp(dobday, s[i].d.month) == 0 && dobyear == s[i].d.year)
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
        }
    }
}