#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_prime(int n, int* output)
{
	int divisor;
	*output = 1;
	if (n <= 1)
	{
		*output = 0;
	}

	for (divisor = 2; (divisor * divisor <= n) && (*output == 1); divisor++)
		if (n % divisor == 0)
		{
			*output = 0;
		}

	
}

int main(void)
{
	int n, output;
	printf("Enter an integer number: ");
	scanf("%d", &n);
	is_prime(n, &output);

	if (output == 1)
	{
		printf("Number %d is prime", n);
	}
	else
	{
		printf("Number %d is not prime", n);
	}

	return 0;
}
