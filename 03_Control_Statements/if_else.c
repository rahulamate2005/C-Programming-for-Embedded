#include <stdio.h>

int main()
{
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);

    if (value > 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Zero or Negative\n");
    }

    return 0;
}