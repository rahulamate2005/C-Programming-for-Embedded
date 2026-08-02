#include <stdio.h>

int main()
{
    int age = 22;
    int citizen = 1;

    printf("Eligible = %d\n", age >= 18 && citizen == 1);
    printf("Age or Citizen = %d\n", age >= 18 || citizen == 0);
    printf("Not Eligible = %d\n", !(age >= 18));

    return 0;
}