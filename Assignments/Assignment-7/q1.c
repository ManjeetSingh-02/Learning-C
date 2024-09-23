#include <stdio.h>

struct STUDENT
{
    char grade, name[10];
    int marks[3];
};

int main()
{

    struct STUDENT S;
    int i;

    printf("Enter name of student: ");
    gets(S.name);
    fflush(stdin);
    printf("\nEnter marks of subject 1: ");
    scanf("%d", &S.marks[0]);
    printf("\nEnter marks of subject 2: ");
    scanf("%d", &S.marks[1]);
    printf("\nEnter marks of subject 3: ");
    scanf("%d", &S.marks[2]);
    fflush(stdin);
    printf("\nEnter grade of student: ");
    scanf("%c", &S.grade);

    printf("\nName of student: %s", S.name);
    printf("\nName of student: %d", S.marks[0]);
    printf("\nName of student: %d", S.marks[1]);
    printf("\nName of student: %d", S.marks[2]);
    printf("\nName of student: %c", S.grade);

    return 0;
}