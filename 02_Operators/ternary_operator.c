#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int largest = (a > b) ? a : b;

    printf("Largest = %d\n", largest);

    return 0;
}