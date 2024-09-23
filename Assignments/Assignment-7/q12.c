#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMP
{
    int Emp_Id;
    struct NAME
    {
        char fname[10];
        char mname[10];
        char lname[10];
    } N;
    struct ADDRESS
    {
        char Area[10];
        char City[10];
        char State[10];
    } A;
    int Age;
    int Salary;
    char Designation[10];
};

int main()
{
    struct EMP Employee[10];
    int i, x;

    printf("Enter total no of employee's details you want to add(Max 10): ");
    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        printf("Enter details of Employee %d:", i + 1);
        printf("\nEnter EmpID - ");
        scanf("%d", &Employee[i].Emp_Id);
        printf("\nEnter First Name - ");
        fflush(stdin);
        gets(Employee[i].N.fname);
        printf("\nEnter Middle Name - ");
        fflush(stdin);
        gets(Employee[i].N.mname);
        printf("\nEnter Last Name - ");
        fflush(stdin);
        gets(Employee[i].N.lname);
        printf("\nEnter Area - ");
        fflush(stdin);
        gets(Employee[i].A.Area);
        printf("\nEnter City - ");
        fflush(stdin);
        gets(Employee[i].A.City);
        printf("\nEnter State - ");
        fflush(stdin);
        gets(Employee[i].A.State);
        printf("\nEnter Age - ");
        scanf("%d", &Employee[i].Age);
        printf("\nEnter Salary - ");
        scanf("%d", &Employee[i].Salary);
        printf("\nEnter Designation - ");
        fflush(stdin);
        gets(Employee[i].Designation);

        printf("\n\nEmployee Details Added\n\n");
    }

    printf("Here are all the employee's details you entered:");

    for (i = 0; i < x; i++)
    {
        printf("\n\nDetails of Employee %d:", i + 1);
        printf("ID - %d", Employee[i].Emp_Id);
        printf("\nFirst Name - ");
        fflush(stdout);
        puts(Employee[i].N.fname);
        printf("\nMiddle Name - ");
        fflush(stdout);
        puts(Employee[i].N.mname);
        printf("\nLast Name - ");
        fflush(stdout);
        puts(Employee[i].N.lname);
        printf("\nArea - ");
        fflush(stdout);
        puts(Employee[i].A.Area);
        printf("\nCity - ");
        fflush(stdout);
        puts(Employee[i].A.City);
        printf("\nState - ");
        fflush(stdout);
        puts(Employee[i].A.State);
        printf("Age - %d", Employee[i].Age);
        printf("Salary - %d", Employee[i].Salary);
        printf("\nDesignation - ");
        fflush(stdout);
        puts(Employee[i].Designation);
    }

    return 0;
}