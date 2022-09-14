#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

	int A, B;	//define two ineger variables
	
	printf("Enter a float value:\n");
	/* get a float numberand store the whole part(integral part) in A and the fractional part
	in B as two integer numbers*/
	scanf("%d.%d", &A, &B);
	printf("\nValue of A and B are, %d and %d\n", A, B);
	// +------------------------------------------------------
	

	int Year, Month, Day;
	printf("Please input the date (Year/Month/Day)\n");
	//get input from user in a specific format and storing the values as integers in variables
	scanf("%d/%d/%d", &Year, &Month, &Day);
	//incrementing Day by one (won't always have a logical outcome!)
	Day++;

	printf("\nTomorow\'s date is: %d/%d/%d \n", Year, Month, Day);
	printf("=====================================\n");

	// +---------------------------------------------------------
	//How to not use the round() command and perform rounding on float numbers using casting
	double Pi = 3.14159265359;
	int Pi_1; 
	double Pi_2; 
	Pi_1 = int(Pi * 100);
	Pi_2 = (double(int(Pi * 100))) / 100; 
	printf("Pi = %f\n", Pi); 
	printf("Pi_1 = %d\n", Pi_1); 
	printf("Pi_2 = %f\n", Pi_2); 
	printf("Pi_2 = %.2f\n", Pi_2); 
	
	

	return 0; 
}
