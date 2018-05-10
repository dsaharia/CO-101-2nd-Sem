/*3. Allocate space for an array using calloc(). (marks: 1)
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=15,i,*p;
    p=(int*)calloc(n, sizeof(int));  
    if(p == NULL)                     
    {
        printf("cannot be allocated\n");
    }
    else{
      printf("Elements of array : \n");
      for(i=0;i<n;i++)
      {
        printf("%d\n",*(p+i));
      }
    }
    return 0;
}
