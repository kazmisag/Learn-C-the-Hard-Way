        /* Exercise 13: Switch Statement*/

#include<stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2){
        printf("You need more need one argument\n");
        // This is how you abort program by returning 1/true
        return 1;
    }

    int i = 0; // counter
    for(i=0; argv[1][i] != '\0'; i++)
    {
        char letter = argv[1][i];   //assign input to var for conditional check
        switch(letter){
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;
            
            case 'o':
            case 'O':
                printf("%d: 'O'", i);
                break;
            
            case 'u':
            case 'U':
                printf("%d: 'U'", i);
                break;
            
            case 'y':
            case 'Y':
                if (i>2)
                {
                    //Its only sometimes Y
                    printf("%d: 'Y'", i);
                }
                break;
                
                default:
                    printf("%d: %c is not a vowel\n", i, letter);
        }//end switch
    }//end for loop
        
    return 0;
}