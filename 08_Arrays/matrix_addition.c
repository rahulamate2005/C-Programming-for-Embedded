#include <stdio.h>
int  main ()
 {
    int matrix [2][3];
    int matrix1[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int matrix2[2][3]={
        {7,8,9},
       {10,11,12}
};
     
    for (int i=0;i<2;i++)
  {
    for (int j=0 ;j<3;j++)
      {
        matrix [i][j] = matrix1[i][j]+matrix2[i][j];
      
      }
   }  for (int i=0;i<2;i++){
    for (int j=0 ;j<3;j++){
        printf("%d \t ",matrix [i][j] );
    } printf("\n ");
   }
    return 0;
}
