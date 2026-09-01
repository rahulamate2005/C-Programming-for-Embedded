#include <stdio.h>
int countlength(char arr[]);
int main (){
         char notchange[100];
     fgets(notchange, 100,stdin);
   printf("length is :%d", countlength(notchange));
        return 0;
}
    int countlength(char arr[])
    {
    int count =0;
    for (int i=0 ;arr[i]!='\0';i++){
        count ++;
     }
     return count-1;
}