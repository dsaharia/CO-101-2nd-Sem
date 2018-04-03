/* Write a program that calculates the area of a circle by taking
   radius as an input from the keyboard*/
/*Dhiraj Saharia(CSB17026)*/

#include <stdio.h>

int main()
{
	float radius, area; // Variable declaration
	printf("Enter the radius of a circle :\n"); 
	scanf("%f", &radius); //Input the radius
	area = 3.14159 * radius * radius; // Calculation of area
	printf("The area of the circle is : %f\n", area); // Result is printed

}
