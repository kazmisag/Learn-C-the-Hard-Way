#include<stdio.h>
#include<stdint.h>

union data
{
    uint32_t a;
    int16_t b;
    uint8_t c;
    long d;
    double e;
    long double f;
    float g;

}data_t;

 int main(void)
{
    //initialize members 
    data_t.a = 21;
    data_t.b = 2;
    data_t.c = 'B';
    
    //Union Members share same memory B and its ASCII value will be printed
    printf("32b a: %d 16b b: %d, 8b c: %c\n", data_t.a, data_t.b, data_t.c);
    printf("Size of long double: %d\n", sizeof(long double));

    //print size of all union member variables to see what is maximum size
    printf("Size of the union:%d\n", sizeof(union data));

    //Access union members through pointer*
    union data *p = &data_t;
    data_t.c = 'Z'; //reset char to Z
    
    //Print out members using -> operator
    printf("32b a: %d 16b b: %d, 8b c: %c\n", p->a, p->b, p->c);    
 
    return 0;
}