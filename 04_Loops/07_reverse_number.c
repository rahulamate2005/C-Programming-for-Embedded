#include <stdio.h>

int main()
{
    int n;
    int reverse = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}