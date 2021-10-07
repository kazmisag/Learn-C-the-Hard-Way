#include<stdio.h>

/*EXERCISE 6 OF SV21POTR BASIC C ABOUT MACRO8
Make a program to print your full name to the terminal.
Your full name shall be defined as a macro in the 
command line when you compile your program.*/

#define NAME_f "Syed"
#define NAME_l "Kazmi"
#define print_msg(n) puts(NAME_##n)

#define PRINT(name) "SYED A G KAZMI"

int main (void)
{

#ifdef Full_Name //&& DOB
printf("%s ", Full_Name);
#else
    printf("You didn't define any Macros on Cmd Prompt\n");

    printf("%s\n", PRINT(name));
    print_msg(f);
    print_msg(l);

#endif
    return 0;
}