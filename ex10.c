#include<stdio.h>

/*ARRAYS OF STRINGS, LOOPING*/

int main(int argc, char *argv[])
{
    int i = 0;

    //go throuh each string in argv
    // why am i skipping argv[0]

    for(int i=1; i<argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }

    //Lets make our own array of strings
    char *states[]= {
        "California", "Oregon",
        "Washington", "Texas"
        };
    
    int num_states = 4;
    for(i = 0; i<num_states; i++)
    {
        printf("states %d: %S", i, states[i]);
    }
    
    return 0;
}