#include <stdio.h>

int main()
{
    int age, hasLicense;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a driving license? (1 = Yes, 0 = No): ");
    scanf("%d", &hasLicense);

    if (age >= 18 && hasLicense)
    {
        printf("\nYou are eligible to drive.\n");
    }
    else
    {
        printf("\nYou are NOT eligible to drive.\n");
    }

    if (age >= 18 || hasLicense)
    {
     printf("You satisfy at least one condition.\n");
    }
    else
    {
    printf("You satisfy neither condition.\n");
    }

    if (!hasLicense)
    {
        printf("You need to obtain a driving license.\n");
    }

    return 0;
}