#include <stdio.h>
#include <string.h>
int stringLength(char str[]);
int main(){
      char name[100];
    fgets(name,100,stdin );
   int length=stringLength(name);
    printf("total number of character:%d",length);

}int stringLength(char str[]){
  int count =0;
  for (int i=0; str[i]!='\0';i++){
   if (str[i]=='\n'){
      break ;
    }count++;
  }

  return count;

}