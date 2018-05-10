#include<stdio.h>
#include<stdlib.h>
int main()
{
  int r=67;
  FILE *fp7=fopen(".txt","w+");
  
  int a=fputc(r,fp7);
  fclose(fp7);
  printf("%c",a);
}
