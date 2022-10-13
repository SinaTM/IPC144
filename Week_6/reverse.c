/*
A program  that gets 5 numbers from the user and then prints the numbers in reverse order
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i, ar1[SIZE];

	printf("Enter %d numbers: \n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%d", &ar1[i]);
	}

	printf("In reverse order:");
	for (i = SIZE - 1; i > -1; i--)
	{
		printf(" %d ", ar1[i]);
	}

	return 0;
}
