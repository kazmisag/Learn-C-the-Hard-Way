/*Exercise 14: Writing And Using Functions*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

//forward declaration
int can_print_it(char ch);
void print_letters(int counter, char argv[]);

void print_arguments(int argc,  char *argv[])
{
    int i=0, string_counter=0;;
    
    for(i = 0; i<argc; i++){
//        print_letters(argv[i]); //keep calling function in loop
//        printf("argc size: %d String length: %d", argc, string_counter=strlen(argv[i]));

        //EXTRA CREDIT WORK USE strlen() to printout input string
        
        string_counter = string_counter + strlen(argv[i]); // count total charcters
        printf("String %d lenght: %d \n", argc, strlen(argv[i])); // print each string size
        
        //call print_letters for each string input
        print_letters(string_counter, argv[i]);
        string_counter=0; // reset string counter to 0
    }
        
}//end print_arguments()

void print_letters(int string_counter, char argv[])
{
    int i=0;
    for(i=0; i<string_counter; i++){
        char ch = argv[i];
    //Extra Credit rework withuot can_print_it()
        if(isalpha(ch) || isblank(ch)){
            printf("'%c' == %d ", ch, ch); //printout letter and ASCII
        }
        else // check if digit then print
        {
            printf("\nDigit in string: %c\n", ch);}
/*        if(can_print_it(ch)){
            printf("'%c' == %d ", ch, ch);  //printout char and ASCII code
        }*/
    }//end for loop

    printf("\n");
}//end print_letters()

int can_print_it(char ch){
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv); // call function and pass inputs
    return 0;
}