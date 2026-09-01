#include <stdio.h>

int main()
{
    FILE *fptr;
int temp;
    fptr=fopen("text.txt","rb");
    
    if (fptr==NULL){
        perror("Error");
        return 1;
    }  fread(&temp, sizeof(temp),1,fptr);
printf("temperature :%d \n",temp);

      printf("successfully print\n");   

    fclose(fptr);
}