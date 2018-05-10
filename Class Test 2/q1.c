/*1. Write a program which shows the usage of all the followings: (2 marks)
    fopen, fclose, feof, fscanf, fprintf, fgets, fputs, fgetc, fputc */
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char c,b[200],b1[200];
  FILE *fp=fopen(".txt","r");
  
  while(1) 
  {
      c = fgetc(fp);
      if(feof(fp))
      {
        break;
      }
      printf("%c", c);
  }
  printf("\n");
  fclose(fp);
  FILE *fp2=fopen(".txt","r");
  fscanf(fp2,"%s",b);
  printf("First Word is:%s\n",b);
  fclose(fp2);
  FILE *fp3=fopen(".txt","r");
  fgets(b1,7,fp3);
  printf("First 6 characters are:%s\n",b1);
  fclose(fp3);
  FILE *fp4=fopen(".txt","w");
  fprintf(fp4,"%s"," Hello World.");
  fclose(fp4);
  FILE *fp5=fopen(".txt","w");
  fputs("system programming language.", fp4);
  fclose(fp5);
  FILE *fp6=fopen("/.txt","r");
  int d=fgetc(fp6);
  printf("First Character :%c\n",d);
  fclose(fp6);
  return(0);
}
