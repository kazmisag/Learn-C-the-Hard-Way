#include<stdio.h>

/* WHILE-LOOP AND BOOLEAN EXPRESSION*/

int main(int argc, char *argv[])
{
    int i = argc;
    while(i)
    {
        printf("arg %d: %s\n", i, argv[i]);   //printout main() inputs
        i--; //increment counter
    }   

    //Lets make our own array of strings
    char *states[]= {
        "California", "Oregon",
        "Washington", "Texas", "\0"
        };
    
    int num_states = 5;
    i = 0;  //reset counter
    while(i<num_states)
    {
        printf("states %d: %s\n", i, states[i]); //
        i++;
    }

    return 0;
}