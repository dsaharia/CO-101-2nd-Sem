/*6. Write a program to create two blank files, write your name in one, copy it's contents to another blank file and delete the first file. Each operation should be performed after any user input. (marks: 2)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char temp[20],temp2[20],temp3[20];
  FILE *fp=fopen(".txt","w");
  printf("Enter (Yes) to print name to file:\n");
  scanf("%s",temp);
  fprintf(fp,"Dhiraj");
  fclose(fp);
  char ch;
  printf("Enter (Yes) to start copying\n");
  scanf("%s",temp2);
  FILE *fp2=fopen(".txt","w");
  FILE *fp3=fopen(".txt","r");
  while((ch=fgetc(fp3))!=EOF)
  {
    printf("%c",ch);
    fputc(ch,fp2);
  }
  fclose(fp2);
  printf("Enter (Yes) to remove file\n");
  scanf("%s",temp3);
  remove(".txt");
  fclose(fp3);
}
