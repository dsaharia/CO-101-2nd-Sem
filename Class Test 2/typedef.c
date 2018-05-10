#include <stdio.h>
#include <string.h>
 
typedef struct {
   char name[50];
   char rollno[50];
   int semester;
   
}students;
 
int main( ) {

   students amit;
   printf("Enter your name:\n");
   scanf("%s",amit.name);
   
   printf("Enter your Roll No:\n");
   scanf("%s",amit.rollno);
   
   printf("Enter your Semester\n");
   scanf("%d",&amit.semester);
   printf("%s,%s,%d", amit.name,amit.rollno,amit.semester);
   
}