#include <stdio.h>
extern int r;
 
void use_extern(void) {
   printf("count is %d\n", r);
}
