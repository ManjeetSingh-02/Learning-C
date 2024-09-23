#include <stdio.h>

struct DISTANCE
{
    int km;
    int meter;
};

int main()
{
    struct DISTANCE D1, D2, D3;

    printf("Enter details of Distance D1:\n");
    printf("\nEnter kms: ");
    scanf("%d", &D1.km);
    printf("\nEnter meters: ");
    scanf("%d", &D1.meter);
    printf("\n\nEnter details of Distance D2:\n");
    printf("\nEnter kms: ");
    scanf("%d", &D2.km);
    printf("\nEnter meters: ");
    scanf("%d", &D2.meter);
    printf("\n\nEnter details of Distance D3:\n");
    printf("\nEnter kms: ");
    scanf("%d", &D3.km);
    printf("\nEnter meters: ");
    scanf("%d", &D3.meter);

    if (D1.km < D2.km && D1.km < D3.km)
    {
        printf("Smallest Distance is D1 with %dkms & %dmeters", D1.km, D1.meter);
    }
    else if (D2.km < D1.km && D2.km < D3.km)
    {
        printf("Smallest Distance is D2 with %dkms & %dmeters", D2.km, D2.meter);
    }
    else if (D3.km < D1.km && D3.km < D2.km)
    {
        printf("Smallest Distance is D3 with %dkms & %dmeters", D3.km, D3.meter);
    }

    return 0;
}