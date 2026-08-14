#include <stdio.h>

int main()
{
    int temperature;

    printf("Enter temperature: ");
    scanf("%d", &temperature);
        if (temperature < 20)
    {
        printf("Low temperature\n");
    }
    else if (temperature <= 30)
    {
        printf("Normal temperature\n");
    }
    else
    {
        printf("High temperature\n");
    }

    return 0;
}