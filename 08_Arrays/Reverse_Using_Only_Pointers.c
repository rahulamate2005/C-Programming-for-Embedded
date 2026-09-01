//Reverse Using Only Pointers Reverse an array without using:arr[i]
#include <stdio.h>
int  main ()
 {    int array[9];
      printf("Enter 9 values:\n");
    for (int i=0;i<9;i++){
          scanf("%d", &array[i]);
    
 }  printf("reverse arrary:\n");
   for (int i=8;i>=0;i--){
    
        printf("%d \t ",*(array+i) );
    } 
    return 0;
  }