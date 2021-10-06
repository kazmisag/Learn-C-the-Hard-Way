#include<stdio.h>

/*ARRAYS OF STRINGS, LOOPING*/

int main(int argc, char *argv[])
{
    int i = 0;

    //go throuh each string in argv
    // why am i skipping argv[0]????

    for(int i=0; i<argc; i++)
    {
        if(i==0 && argc==1)
        {  
            printf("Only one arg %d: %s\n", i, argv[i]);
            //break;
        }
        else
            printf("arg %d: %s\n", i, argv[i]);
    }

    //Lets make our own array of strings
    char *states[]= {
        "California", "Oregon",
        "Washington", "Texas", "\0"
        };
    
    int num_states = 5;
    for(i = 1; i<argc; i++)
    {
        printf("states %d: %s\n", i, states[i]); // assign inputs
    }
    
    return 0;
}