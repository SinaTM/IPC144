#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//An array is passed to the function
int count_spaces(const char charArr[])
{
	int count = 0;
	int i; 

	for (i = 0; charArr[i] != '\0'; i++)
	{
		if (charArr[i] == ' ')
		{
			count++; 
		}
	}

	return count; 
}

//A pointer is passed to the function
int count_spaces2(const char* ptr)
{
	int count = 0;
	

	for ( ; *ptr != '\0'; ptr++)
	{
		if (*ptr == ' ') 
		{
			count++;
		}
	}

	return count;
}

int main(void)
{

	char str1[] = "C programming is amazing!";
	
	printf("There are %d spaces in \"%s\"\n", count_spaces(str1), str1); 

	printf("There are %d spaces in \"%s\"\n", count_spaces2(str1), str1);

}
