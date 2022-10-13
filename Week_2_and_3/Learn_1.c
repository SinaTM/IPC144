#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

	int num_1, num_2;	//define two ineger variables

	printf("Enter a float value:\n");
	/* get a float numberand store the whole part(integral part) in A and the fractional part
	in B as two integer numbers*/
	scanf("%d.%d", &num_1, &num_2);
	printf("\nValue of A and B are, %d and %d\n", num_1, num_2);
	
	int Year, Month, Day;
	printf("Please input the date (Year/Month/Day)\n");

	//get input from user in a specific format and storing the values as integers in variables
	scanf("%d/%d/%d", &Year, &Month, &Day);
	//incrementing Day by one (won't always have a logical outcome!)
	Day++;

	printf("\nTomorow\'s date is: %d/%d/%d \n", Year, Month, Day);
	printf("=====================================\n");


	return 0;
}
