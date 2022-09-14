#include <stdio.h>

int main(void)
{
	//define a number in base 10
	int Dec = 20;
	// zero before the number puts compiler into octal mode
	int Oct = 030;
	//0x puts the compiler into hexadecimal mode
	int Hex = 0x3F; 

	//print all the numbers as decimals:
	printf("dec=%d, oct=%d, hex=%d\n", Dec, Oct, Hex);
	//print in decimal, octal and hexadecimal mode:
	printf("dec=%d, oct=%o, hex=%x\n", Dec, Oct, Hex);

	return 0; 


}