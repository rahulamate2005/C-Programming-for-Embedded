#include <stdio.h>

int main()
{    int temperature;

    printf("Enter temperature: ");
    scanf("%d", &temperature);

    if (temperature > 30)
    {
        printf("High temperature\n");
    }

    return 0;
}