#include <stdio.h>

int main()
{
    int num = 100;
    float pi = 3.14;
    double value = 25.6789;
    char letter = 'R';

    printf("%d\n", num);
    printf("%.2f\n", pi);
    printf("%.4lf\n", value);
    printf("%c\n", letter);

    return 0;
}