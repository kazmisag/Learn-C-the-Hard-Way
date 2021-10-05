#include<stdio.h>

/* PROGRAM FOR IF, ELSE-IF, ELSE*/

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 1)
    {
        printf("You only have one argument: %s You suck\n", argv[0]);
    }else if (argc>1 && argc<4)
    {
        printf("Here is your arguments\n");

        for(i=0; i<argc; i++)
        {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }//End else-if
    else{
        printf("You have too many arguments\n");
    }// End else
       
    return 0;
}