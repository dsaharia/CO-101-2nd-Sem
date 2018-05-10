/*4. Write a simple program to differentiate call by value and call by references. (marks: 1)
*/
#include <stdio.h>

void swapcov(int,int);
void swapcor(int*,int*);

int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    swapcov(a,b);
    printf("The value of a= %d and b=%d using Call by value\n",a,b);
    swapcor(&a,&b);
    printf("The value of a=%d and b=%d using Call by reference\n", a,b);
}

void swapcov(int x,int y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}

void swapcor(int *x,int*y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
