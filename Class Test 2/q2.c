/*2. Use malloc() to allocate space for any three variables of any datatype. Print the contents and addresses of the variables. Use free() to free the memory locations. Print the contents of the variables again. (marks: 3)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int* ptr;
  ptr = (int *) malloc(10 * sizeof(int));
  int* ptr2=ptr;
  int i=0;
  while(i<10)
  {
    *ptr=i;
    i++;
    ptr++;
  }
  i=0;
  ptr=ptr2;
  printf("Not Removing\n");
  while(i<10)
  {
    printf("Value is:%d\n",*ptr);
    printf("Address is:%p\n",ptr);
    i++;
    ptr++;
    
  }
  printf("Removing\n");
  free(ptr2);
  ptr=ptr2;
  i=0;
  while(i<10)
  {
    printf("Value is:%d\n",*ptr);
    printf("Address is:%p\n",ptr);
    i++;
    ptr++;
  }
}
