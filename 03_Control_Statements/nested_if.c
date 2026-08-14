#include <stdio.h>

int main()
{     int voltage;

    printf("Enter battery voltage: ");
    scanf("%d", &voltage);

    if (voltage > 0)
    {
        if (voltage >= 12)
        {
            printf("Battery voltage is normal\n");
        }
        else
        {  printf("Battery voltage is low\n");
        }
    }
    else
    { printf("Invalid voltage\n");
    }

    return 0;
}