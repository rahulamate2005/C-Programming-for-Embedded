#include <stdio.h>
#include <string.h>

//user defined 
struct student{
    int roll;
    float cgpa;
    char name[100];


}; void printinfo(  struct student s1 );



int main(){
    struct student s1={123,2.4,"rahul"};
    struct student *ptr=&s1;
    printinfo(s1);




  

    

    return 0;
} void printinfo(  struct student s1 ){
    
     printf("name       :%s\n",s1.name );
      printf("roll .roll number :%d\n",s1.roll);
     //  printf("roll-> number :%d\n",ptr->roll);
    printf("cgpa        :%.2f\n",s1.cgpa);
    printf("name       :%s\n",s1.name );
   //  printf("roll number :%d\n",(*ptr).roll);

}