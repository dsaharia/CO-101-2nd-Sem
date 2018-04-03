#include <stdio.h>

int main()
{   printf("\"Hello\",'How are you?'\n");
    int a = 4, b = 4, sum, sub, multi, division, c;
    
    sum = a + b;
    printf("The sum is %d \n", sum);
    
    sub = a - b;
    printf("The subtraction is %d \n", sub);
    
    multi = a * b;
    printf("The multiplication is %d \n", multi);
    
    division = a / b;
    printf("The division is %d \n", division);
    
    char str[20];
    gets(str);
    printf("The string is %s \n", str);
    c = 144;
    printf("The hex number is : %X \n", c);
    printf("The octal number is : %o ", c);
    
}
