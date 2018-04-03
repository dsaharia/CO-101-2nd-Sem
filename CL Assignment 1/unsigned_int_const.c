/* Write a C program that performs the addition of 
   an unsigned integer constant and a long integer constant
   and store the result in a long int variable */
/* Dhiraj Saharia(CSB17026) */

#include <stdio.h>

int main()
{
    unsigned int const A = 12345;
    long int const B = 54321;
    long int c;
    c = A + B;
    printf("The sum of A and B is %d", c);
}
