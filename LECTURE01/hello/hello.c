/*
  
 First program of the course
 
 Simple hello, World!
 
 Created by vjfidalgo on 03-JUL-2018

 Command: gcc -g -O0 -Wall hello.c -o hello.o
 
 */ 

#include <stdio.h> /* basic I/O functionality */

/* The main function -- entry point*/
int main()
{
    const char myOtherString[] = "hello, people!\n";
    
    puts(myOtherString);
    
    return 0; /*returning 0 <=> success*/
}
