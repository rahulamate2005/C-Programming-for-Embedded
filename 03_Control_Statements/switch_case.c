#include <stdio.h>

int main()
{
    int choice;

    printf("1. LED ON\n");
    printf("2. LED OFF\n");
    printf("3. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("LED ON\n");
            break;

        case 2:
            printf("LED OFF\n");
            break;

        case 3:
            printf("Exit\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}