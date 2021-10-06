#include<stdio.h>

/* PROGRAM FOR IF, ELSE-IF, ELSE*/

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 1)
    {
       printf("You only have one argument: %s You suck\n", argv[0]);
    }
    
    else if(argc>1 && argc<4)
        {
            printf("Here is your arguments\n");
            for(i=0; i<argc; i++)
            {printf("%s \n", argv[i]);}
        }//End
    
    // will execute in all cases
    else if(argc>1 || argc<4)
        {
            printf("Here is your arguments\n");
            for(i=0; i<argc; i++)
                {
                    printf("%s \n", argv[i]);
                }
        }//End of loop
    
    else{printf("You have too many arguments\n");}// End
       
    return 0;
}