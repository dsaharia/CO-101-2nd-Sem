#include <ctype.h>
    #include <errno.h>
    #include <float.h>
    #include <limits.h>
    #include <locale.h>
    #include <math.h>
    #include <setjmp.h>
    #include <signal.h>
    #include <stdarg.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <time.h>
    #include <unistd.h>
int average(int num, ...){
    va_list valist;
    int sum = 0, i;
    va_start(valist, num);
    for (i = 0; i < num; i++) 
        sum += va_arg(valist, int);
    va_end(valist);
    return sum / num;
  }
    void signal_handler(int signal)
{   if (signal == SIGINT) 
        printf("Received a SIGINT signal\n");
    return; 
    
    int main(){
    //#include <ctype.h>
    printf("\n\nCTYPE.H");
    printf("\n FUNCTION: ISALPHANUMERIC()");
    int var1='D';
    if( isalnum(var1) ) {
      printf("\nvar1 = %c is alphanumeric", var1 );
   } else {
      printf("\nvar1 = %c is not alphanumeric", var1 );
   }
   
    printf("\n FUNCTION: ISDIGIT()");
    if( isdigit(var1) ) {
      printf("\nvar1 = %c is a digit", var1 );
   } else {
      printf("\nvar1 = %c is not a digit", var1 );
    //getch();
  }
  //errorno.h
   int b;
    printf("Enter Value of a\n");
    scanf("%d",&b);
    printf("Value of errno: %d\n", errno);
    printf("Message using strerror() : %s\n", strerror(errno));
    perror("Message from perror");
    return 0;
  //floats.h and limits.h
    printf("\n\n LIMITS.H");
    printf("\nThe maximum value of SIGNED CHAR using SCHAR_MAX= %d", SCHAR_MAX);
    printf("\nThe maximum value of UNSIGNED CHAR using UCHAR_MAX= %d", UCHAR_MAX);
   
   printf("\n\n FLOAT.H");
    printf("\nThe maximum value of float using FLT_MAX = %.10e", FLT_MAX);
    printf("\nThe minimum value of float using FLT_MIN = %.10e", FLT_MIN);
    
    //locale.h
    printf("\n\nLOCALE.H");
   printf("\n FUNCTION:setlocale()");
   time_t currtime;
   struct tm *timer;
   char buffer[80];
   time( &currtime );
   timer = localtime( &currtime );
   printf("\nLocale is: %s", setlocale(LC_ALL, "en_GB"));
   strftime(buffer,80,"%c", timer );
   printf("\nDate is: %s", buffer);
   //math.h
   printf("\n\nMATH.H");
    printf("\n FUNCTION:SQRT()");
    printf("\n Square root of 51: %f ",sqrt(51));
    printf("\n FUNCTION:POW()");
    printf("\n 53 to the power of 2.37: %f",pow(53, 2.37));

    /*//#include <signal.h>
    printf("\n\nSIGNAL.H");
    printf("\n FUNCTION:RAISE() & SIGNAL()");
    signal(SIGINT, signal_handler);
    printf("\nRaising a SIGINT signal\n");
    raise(SIGINT); */
    //#include <stdarg.h>
    printf("\n STDARG.H");
    printf("\n FUNCTION:VA_START() & VA_END()");
    printf("\nAverage :  = %d",average(3, 5, 10, 15));
    }   
}
