/*
A program that gets integers from the user and prints which number repeated for how many times
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100

int main(void)
{
	int ar1[SIZE], nInteger = 0, i, j, temp, repeat;
	int repeatArr[SIZE] = {0}, repeatNum[SIZE] = {0};

	do
	{
		printf("Enter an integer number (-99 to exit) ");
		scanf("%d", &temp);
		ar1[nInteger++] = temp;

	} while (temp != -99);

	
	for (i = 0; i < nInteger - 1; i++)
	{
		repeat = 0; 
		if (repeatNum[i] == 0) 
		{
			for (j = i + 1; j < nInteger; j++)
			{
				if (ar1[i] == ar1[j])
				{
					repeat++;
					repeatNum[j] = 1;
				}
			}
			
			repeatArr[i] = repeat; 
			
		}
		
	}
	printf("Repeated numbers:\n");
	for (i = 0; i < nInteger - 1; i++)
	{
		if (repeatArr[i] > 0 && repeatNum[i] == 0)
		{
			printf("Number %d repeated %d time%c \n", ar1[i], repeatArr[i], repeatArr[i] > 1 ? 's' : ' ');
		}

	}

	return 0;
}
