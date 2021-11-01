#include<stdio.h>

/* PROGRAM TO WORK WITH BIT OPERATORS in 8 bit */

int main (int argc, char *argv[])
{
	int a = 9, b = -5; // initialize variables a at 2nd bit, b at 3rd
	int c; // result holder

	c = a & b;	// AND compare bits in both bytes
	printf("a & b = %d\n", c);// print out the resultant byte value

	c = a | b; // OR both bytes
	printf("a | b = %d\n", c); 

	c = a ^ b;	// XOR both bytes
	printf("a XOR b = %d\n", c);

	c = a >>2;	// shift a position right by 2 bits 
	printf("a >> 2 = %d\n", c);

	c = a << 2;	// shift a position left by 2 bits
	printf("a << 2 = %d\n",c);

	c = b << 2;	// shift b position left by 2 bits
	printf("b << 2 = %d\n",c);

	c = b >> 3;	// shift a position right by 3 bits
	printf("b >> 3 = %d\n",c);

	a = 4, b = 3;

	a= a ^ b;
	printf("a = a ^ b = %d\n", a);

	b = a ^ b;
	printf("b = a ^ b = %d\n", b);

	a = a ^ b;
	printf("a = a ^ b = %d\n", a);
return 0;
}
