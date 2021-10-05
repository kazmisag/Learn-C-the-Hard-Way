#include<stdio.h>

/*EXERCISE 6 OF SV21POTR BASIC C ABOUT MACRO8
Make a program to print your full name to the terminal.
Your full name shall be defined as a macro in the 
command line when you compile your program.*/

#define PRINT(name) "Syed Abbas Ghazanfar Kazmi"

int main (void)
{
    printf("%s\n", PRINT(name));
    return 0;
}