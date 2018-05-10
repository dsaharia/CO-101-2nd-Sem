/*12. Write to program to use all the following storage classes: (marks: 1)
*/
#include<stdio.h>
int r;
extern void use_extern();
void test();

int main()
{
    register int c = 10;
    test();
    test();
    test();
    auto int i = 1;
  {
    auto int i = 2;
    {
      auto int i = 3;
      printf ( "\n%d\t", i);
    }
    printf ( "%d\t", i);
  }
  printf( "%d\n", i);
  r = 5;
  use_extern();
}

void test()
{
    static int a = 0;
    a = a + 1;
    printf("%d\t",a);
}
