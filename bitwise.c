#include<stdio.h>

/* PROGRAM TO WORK WITH BIT OPERATORS */

int main (int argc, char *argv[])
{
	int a = 2, b = 4; int c;

	c = a & b;
	printf("a & b = %d\n", c);

	c = a | b;
	printf("a | b = %d\n", c);

	c = a ^ b;
	printf("a XOR b = %d\n", c);

	c = a >>2;
	printf("a >> 2 = %d\n", c);

	c = a << 2;
	printf(" a << 2 = %d\n",c);

return 0;
}
