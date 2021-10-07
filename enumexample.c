#include<stdio.h>
#include<stdint.h>

enum Color
{
    RED = 10,
    BLUE,
    GREEN= 10
};

int main(void)
{
    typedef enum Color color_t;
    enum Color my_color = RED;
   // color_t = RED;

    printf("My color: %d\n", my_color);
    //printf("typedef color: %\n", color_t);
    printf("Color: %d, %d, %d\n", RED, BLUE, GREEN);
    return 0;
}