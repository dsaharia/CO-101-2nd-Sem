/*7. Use file pointer to search a sub-string within a large string. (marks: 2)
*/
#include <stdio.h>
void main()
{
   char string[1000], substring[1000];
   int position,len, a=0;
   printf("Input a string under 1000 characters\n");
   scanf("%s",string);

   printf("Enter the position and length of sub-string\n");
   scanf("%d%d", &position, &len);

   while (a<len) {
      substring[a]=string[position+a-1];
      a++;
   }
   substring[a]='\0';
   printf("substring is \"%s\"\n", substring);

}

