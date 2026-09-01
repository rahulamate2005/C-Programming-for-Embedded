#include <stdio.h>

int main()
{
    FILE  *ptr;
    ptr=fopen("trxt.txt", "r");

    int a;
    fscanf(ptr, "%d", &a);
    int b;
    fscanf(ptr, "%d", &b);
    fclose(ptr);

  ptr=fopen("trxt.txt", "w");
 fprintf(ptr,"%d",a+b);
   fclose(ptr);
    
    return 0;
}