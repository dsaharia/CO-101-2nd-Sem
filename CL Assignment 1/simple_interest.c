/* Let Principal = p, Rate per annum(%) = r, Time in years = t.The simple interest
   =(P * r * t)/100. Write a C program that computes the simple interest
   with user given input p,r,t*/
/*Dhiraj Saharia(CSB17026)*/

#include <stdio.h>

int main()
{
    float p, r, t, simple_interest;
    
    printf("Enter the Principal amount :\n");
    scanf("%f", &p); //Input for Principal amount
    
    printf("Enter the rate of interest :\n");
    scanf("%f", &r); // Input for rate of interest
    
    printf("Enter the time in years :\n");
    scanf("%f", &t); // Input for duration in years
    
    simple_interest = (p * r * t)/100; // Calculation of the interest
    printf("The simple interest will be :%f", simple_interest); // Printing of the result
    
}
