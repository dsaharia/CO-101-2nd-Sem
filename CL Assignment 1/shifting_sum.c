/* Add two short integers and store the result in a long variable. Print the results case 1: by shifting 8 positions right and case 2: by shifting 8 positions left.*/
/* Dhiraj Saharia(CSB17026)*/

#include <stdio.h>

int main()
{
   short int a = 20, b = 5120;
   long int c, d;
   /*Case 1*/
   c = a << 8;
   printf("Left shifting 8 positions gives : %d \n", c);
   /*Case 2*/
   d = b >> 8;
   printf("Right shifting 8 positions gives : %d", d);
   return 0;
}
