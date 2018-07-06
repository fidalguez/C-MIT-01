/*

 Second program of the course

 Check size of various types

 Created by vjfidalgo on 06-JUL-2018

 Command: gcc -g -O0 -Wall size.c -o size.o

 */

 #include <stdio.h>
 #include <limits.h>
 #include <float.h>

 int main() {
   int c  = sizeof(char);
   int uc = sizeof(unsigned char);
   int s  = sizeof(short);
   int i  = sizeof(int);
   int ui = sizeof(unsigned int);
   int ul = sizeof(unsigned long);
   int f  = sizeof(float);
   int d  = sizeof(double);
   printf("Size of char          is: %d\n",c);
   printf("Size of unsigned char is: %d\n",uc);
   printf("Size of short         is: %d\n",s);
   printf("Size of int           is: %d\n",i);
   printf("Size of unsigned int  is: %d\n",ui);
   printf("Size of unsigned long is: %d\n",ul);
   printf("Size of float         is: %d\n",f);
   printf("Size of double        is: %d\n",d);
   return 0;
 }
