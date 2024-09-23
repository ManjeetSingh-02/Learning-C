#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMPLOYEE
{
    int empID;
    char empname[20];
    char gender;
    char department[10];
    char cname[10];
    int salary;
};

int main()
{
    struct EMPLOYEE e[3];
    int i, x;

    for (i = 0; i < 3; i++)
    {
        printf("\n\nEnter following details of employee %d:\n", i + 1);
        printf("\nEmployee ID - ");
        scanf("%d", &e[i].empID);
        printf("\nEmployee Name - ");
        fflush(stdin);
        gets(e[i].empname);
        printf("\nEmployee Gender - ");
        fflush(stdin);
        scanf("%c", &e[i].gender);
        printf("\nEmployee Department - ");
        fflush(stdin);
        gets(e[i].department);
        printf("\nEmployee Company Name - ");
        fflush(stdin);
        gets(e[i].cname);
        printf("\nEmployee Salary - ");
        scanf("%d", &e[i].salary);
        printf("\nEmployee Added");
    }

    printf("\n\nSelect the employee from 1-3 to edit the details: ");
    scanf("%d", &x);

    if (x < 1 || x > 3)
    {
        printf("\nWrong Input");
    }
    else
    {
        int y;
        printf("\n\nOnly Employee Department and Salary can be edited");
        printf("\n1. Edit Department");
        printf("\n2. Edit Salary");
        printf("\n3. Edit Both");
        printf("\nExcept 1-3 to exit");
        printf("\nSelect from the given menu: ");
        scanf("%d", &y);

        if (y == 1)
        {
            printf("\nEnter new department for employee %d - ", x);
            fflush(stdin);
            gets(e[x].department);
            printf("\nSuccessfully Edited");
        }
        else if (y == 2)
        {
            printf("\nEnter new salary for employee %d - ", x);
            scanf("%d", &e[x].salary);
            printf("\nSuccessfully Edited");
        }
        else if (y == 3)
        {
            printf("\nEnter new department for employee %d - ", x);
            fflush(stdin);
            gets(e[x].department);
            printf("\nEnter new salary for employee %d - ", x);
            scanf("%d", &e[x].salary);
            printf("\nSuccessfully Edited");
        }
        else
        {
            exit(1);
        }

        printf("\n\nAfter editing, new details are:");
        printf("\nEmployee ID - %d", e[x].empID);
        printf("\nEmployee Name - ");
        fflush(stdout);
        puts(e[x].empname);
        printf("\nEmployee Gender - ");
        fflush(stdout);
        printf("%c", e[x].gender);
        printf("\nEmployee Department - ");
        fflush(stdout);
        puts(e[x].department);
        printf("\nEmployee Company Name - ");
        fflush(stdout);
        puts(e[x].cname);
        printf("\nEmployee Salary - %d", e[x].salary);
    }

    return 0;
}