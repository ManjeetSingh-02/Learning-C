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

void displaydata(struct EMPLOYEE *);

int main()
{
    struct EMPLOYEE E, *ptr;

    ptr = &E;

    ptr->empID = 1;
    strcpy(ptr->empname, "AAAAA");
    ptr->gender = 'M';
    strcpy(ptr->department, "CS");
    strcpy(ptr->cname, "XYZ");
    ptr->salary = 10000;

    displaydata(ptr);

    return 0;
}

void displaydata(struct EMPLOYEE *p)
{
    printf("Details of Employee:");
    printf("\nID - %d", p->empID);
    printf("\nName - ");
    fflush(stdout);
    puts(p->empname);
    fflush(stdout);
    printf("Gender - %c", p->gender);
    printf("\nDepartment - ");
    fflush(stdout);
    puts(p->department);
    printf("Company Name - ");
    fflush(stdout);
    puts(p->cname);
    printf("Salary - %d", p->salary);
}