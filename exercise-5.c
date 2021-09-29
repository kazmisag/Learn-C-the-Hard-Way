/* A= 45, B=-13, C=0 and D is a given number.
Notice: The placeholder for A, B, C and D is one byte (8 bits).
D is unknown and can be any number between 0 and 255.
---------------------------------------------------
| D7 | D6 | D5 | D4 | D3 | D2 | D1 | D0 |
---------------------------------------------------
*/

#include<stdio.h>

void q2(int x, int y, int z);   //function to calculate Q.2
void q3(int x, int y, int z);   //function for Q.3 to perform bit operators

int main (int argc, char *argv[])

{
    int a = 45, b = -13, c = 0; // initialized integers for bit manipulation
    
    q2(a, b, c);   // call function to printout Q2 results

    q3(a, b, c);   // call function to printout Q3 results

    return 0;
}

void q2(int a, int b, int c)
{
    //Q.2 Calculate A + B, A - B, C - A and B - A.
    printf("a+b = %d\n", (a+b));    // print sum of a, b
    printf("a-b = %d\n", (a-b));    // print out difference of a,b
    printf("c-a = %d\n", (c-a));    // printout difference of c, a
    printf("b-a = %d\n", (b-a));     //printout difference of b, a
}

void q3(int a, int b, int c)
{
    //c = ; // OR both bytes
	printf("a. a | b = %d\n", a | b); 

    //c = ;	// AND compare bits in both bytes
	printf("b. a & b = %d\n", a & b);// print out the resultant byte value

	//c = ;	// XOR both bytes
	printf("c. a XOR b = %d\n",a ^ b);

    //c = ;	// shift a position left by bits
	printf("d. a << 3 = %d\n",a << 3);

	//c = ;	// shift a position right by bits 
	printf("e. b >> 2 = %d\n", b >>2);

	//c = ;	// shift b position left by 2 bits
	printf("f. c >> 5 = %d\n", c >> 5);

	//c = b >> 3;	// shift a position right by 3 bits
	printf("g. (a << 3)>>3 = %d\n",(a << 3)>>3);

    printf("h. (~a&b) XOR (~c|a) = %d\n", (~a&b)^(~c|a));

}