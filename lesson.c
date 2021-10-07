#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

void func(void)
{
    static int y = 0;

    y = y+1;

    int x = 0;

    x = x+1;

    (void)printf("%d %d\n", touhx,  y);
}
int main(void)
{

    func();
    func();
    func();
    register double b = 10;

    extern int var;

    (void)printf("%d\n", sizeof(long double));
    (void)printf("%d\n", var);

    var = 20;

    (void)printf("%d\n", var);
    return 0;

}