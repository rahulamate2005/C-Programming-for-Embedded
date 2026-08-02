#include <stdio.h>

int main()
{
    printf("char = %zu bytes\n", sizeof(char));
    printf("int = %zu bytes\n", sizeof(int));
    printf("float = %zu bytes\n", sizeof(float));
    printf("double = %zu bytes\n", sizeof(double));
    printf("long = %zu bytes\n", sizeof(long));
    printf("long long = %zu bytes\n", sizeof(long long));

    return 0;
}