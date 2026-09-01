//Matrix Transpose
//1 2 3
//4 5 6
//Output
//1 4
//2 5
//3 6
#include <stdio.h>
int  main ()
 {
    int matrix [3][2];
    int matrix1[2][3]={
        {1,2,3},
        {4,5,6}
    }; 
    for (int i=0;i<2;i++){
  
    for (int j=0 ;j<3;j++)
      
        matrix [j][i] = matrix1[i][j];
      
    }
   for (int i=0;i<3;i++){
    for (int j=0 ;j<2;j++){
        printf("%d \t ",matrix [i][j] );
    } printf("\n ");
   }
    return 0;
  }