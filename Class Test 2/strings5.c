/*5. Write a program to show any three string operations using strings.h. (marks: 1)
*/
#include <stdio.h>
#include <string.h>

main()
{
    char src[50];
    int result;
    char s1[10]="Hello",s2[10]="World";
    printf("--For String concatenate--\n");
    printf("Enter a string not more than 50 characters\n");
    gets(src);
    strcat(src, "This string is concatenated");
    puts(src);
    
    printf("--For String copy--\n");
    strcpy(src,"The string is copied\n");
    puts(src);
    
    result = strcmp(s1, s2);

    
    if (result == 0) 
        printf("Strings are the same\n");

    
    if (result < 0) 
        printf("Second string is less than the first\n");

    return 0;
}
