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
    main()
    {
    //#include <ctype.h>
    printf("\nCTYPE.H");
    printf("\n FUNCTION: ISALPHANUMERIC()");
    int var1='D';
    if( isalnum(var1) ) {
      printf("\nvar1 = %c is alphanumeric", var1 );
   } else {
      printf("\nvar1 = %c is not alphanumeric", var1 );
   }
   printf("\n FUNCTION: ISDIGIT()");
    if( isdigit(var1) ) {
      printf("\nvar1 = %c is a digit\n", var1 );
   } else {
      printf("\nvar1 = %c is not a digit\n", var1 );
    
    int b;
    printf("Enter Value of a\n");
    scanf("%d",&b);
    printf("Value of errno: %d\n", errno);
    printf("Message using strerror() : %s\n", strerror(errno));
    perror("Message from perror");
  }
    printf("\n LIMITS.H");
    printf("\nThe maximum value of SIGNED CHAR using SCHAR_MAX= %d", SCHAR_MAX);
    printf("\nThe maximum value of UNSIGNED CHAR using UCHAR_MAX= %d", UCHAR_MAX);
   
   printf("\n FLOAT.H");
    printf("\nThe maximum value of float using FLT_MAX = %.10e", FLT_MAX);
    printf("\nThe minimum value of float using FLT_MIN = %.10e", FLT_MIN);
      //math.h
    printf("\n\nMATH.H");
    printf("\n FUNCTION:SQRT()");
    printf("\n Square root of 51: %f ",sqrt(51));
    printf("\n FUNCTION:POW()");
    printf("\n 53 to the power of 2.37: %f",pow(53, 2.37));
    printf("\n\nSTRING.H");
	  char str1[10]="AB";
    char str2[]="EF";
    printf("\n FUNCTION:STRCMP()");
    printf("\n str1=AB AND str2=EF, comparing them using strcmp, RESULT= %d",strcmp(str1,str2));
    printf("\n FUNCTION:STRCAT()");
    printf("\n str1=AB AND str2=EF, concating them using strcat, RESULT= %s",strcat(str1,str2));
      printf("For stdio.h");
      int a;
        printf("Enter a number:\n");
        scanf("%d",&a);
        printf("value at a is %d",a);
      printf("\n\nTIME.H");	
   printf("\n FUNCTION:DIFFTIME()");
   time_t start_t, end_t;
   double diff_t;
   printf("\n Starting of the program...");
   time(&start_t);
   printf("\n Sleeping for 10 seconds...");
   sleep(5);
   time(&end_t);
   printf("\n Execution time = %f", difftime(end_t, start_t));
   printf("\n FUNCTION:TIME()");
   time_t seconds;
   seconds = time(NULL);
   printf("\nHours since January 1, 1970 = %ld", seconds/3600);
   printf("\n END of the program...");
        
    }
