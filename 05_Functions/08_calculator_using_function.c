#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Result = %d", add(a, b));
            break;

        case 2:
            printf("Result = %d", subtract(a, b));
            break;

        case 3:
            printf("Result = %d", multiply(a, b));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}