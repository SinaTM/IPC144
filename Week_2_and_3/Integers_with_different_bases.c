#include <stdio.h>

int main(void)
{
	//define a number in base 10
	int decNum = 20;
	// zero before the number puts compiler into octal mode
	int octNum = 030;
	//0x puts the compiler into hexadecimal mode
	int hexNum = 0x3F;

	//print all the numbers as decimals:
	printf("dec=%d, oct=%d, hex=%d\n", decNum, octNum, hexNum);
	//print in decimal, octal and hexadecimal mode:
	printf("dec=%d, oct=%o, hex=%x\n", decNum, octNum, hexNum);

	return 0;


}
