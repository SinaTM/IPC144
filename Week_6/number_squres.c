/*A program to use parallel arrays to get 5 integers from the user and calculates the square of numbers*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 5

int main(void)
{
	int numArray[SIZE], numSquars[SIZE], i;

	for (i = 0; i < SIZE; i++)
	{
		printf("Input an integer number: ");
		scanf("%d", &numArray[i]);
		numSquars[i] = numArray[i] * numArray[i];
	}

	printf("numbers are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d ", numArray[i]);
	}

	printf("\nnumber squares are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d ", numSquars[i]);
	}

}
