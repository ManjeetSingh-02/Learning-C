#include <stdio.h>

struct VECTOR
{
    int x;
    int y;
    int z;
} V1, V2;

void readdata();
void displaydata();
void addvectors();
void scalevector();

int main()
{
    int n;
    readdata();

    printf("\n1. Add two vectors");
    printf("\n2. Scale vectors");
    printf("\n Anything except 1 & 2 to exit");
    printf("Select from given menu: ");
    scanf("%d", &n);

    if (n == 1)
    {
        addvectors();
    }
    else if (n == 2)
    {
        scalevector();
    }
    return 0;
}

void readdata()
{
    printf("Enter details for Vector1:");
    printf("\nEnter x - ");
    scanf("%d", &V1.x);
    printf("\nEnter y - ");
    scanf("%d", &V1.y);
    printf("\nEnter z - ");
    scanf("%d", &V1.z);

    printf("Enter details for Vector2:");
    printf("\nEnter x - ");
    scanf("%d", &V2.x);
    printf("\nEnter y - ");
    scanf("%d", &V2.y);
    printf("\nEnter z - ");
    scanf("%d", &V2.z);

    displaydata();
}

void displaydata()
{
    printf("Details of Vector1:");
    printf("\nX - %d", V1.x);
    printf("\nY - %d", V1.y);
    printf("\nZ - %d", V1.z);

    printf("Details of Vector2:");
    printf("\nX - %d", V2.x);
    printf("\nY - %d", V2.y);
    printf("\nZ - %d", V2.z);
}

void addvectors()
{
    struct VECTOR MV;

    MV.x = V1.x + V2.x;
    MV.y = V1.y + V2.y;
    MV.z = V1.z + V2.z;

    printf("\nAfter Addition: ");
    printf("\nX - %d", MV.x);
    printf("\nY - %d", MV.x);
    printf("\nZ - %d", MV.x);
}

void scalevector()
{
    printf("\nAfter Scailing Vectors by factor of 10 - 1: ");
    V1.x = V1.x * 1;
    V1.y = V1.y * 1;
    V1.z = V1.z * 1;

    V2.x = V2.x * 1;
    V2.y = V2.y * 1;
    V2.z = V2.z * 1;
    displaydata();
    printf("\nAfter Scailing Vectors by factor of 10 - 2: ");
    V1.x = V1.x * 2;
    V1.y = V1.y * 2;
    V1.z = V1.z * 2;

    V2.x = V2.x * 2;
    V2.y = V2.y * 2;
    V2.z = V2.z * 2;
    displaydata();
    printf("\nAfter Scailing Vectors by factor of 10 - 5: ");
    V1.x = V1.x * 5;
    V1.y = V1.y * 5;
    V1.z = V1.z * 5;

    V2.x = V2.x * 5;
    V2.y = V2.y * 5;
    V2.z = V2.z * 5;
    displaydata();
    printf("\nAfter Scailing Vectors by factor of 10 - 10: ");
    V1.x = V1.x * 10;
    V1.y = V1.y * 10;
    V1.z = V1.z * 10;

    V2.x = V2.x * 10;
    V2.y = V2.y * 10;
    V2.z = V2.z * 10;
    displaydata();
}