/*9. Write a program to use strerror() and perror() and show some error messages. (marks: 1)
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>
 
int main ()
{
    int b;
    printf("Enter Value of a\n");
    scanf("%d",&b);
    printf("Value of errno: %d\n", errno);
    printf("Message using strerror() : %s\n", strerror(errno));
    perror("Message from perror");
    return 0;
}
