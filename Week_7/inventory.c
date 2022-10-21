/*
Program to use structures to get and store product id, month, year and price from the user 
and subsequently prints out the information 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

struct Info
{
	int id;
	int month, year;
	double price;
};



int main(void)
{
	int i, temp, ctrl = 1, counter = 0;
	struct Info productInfo[MAX];

	do
	{
		printf("Enter item %d produce ID (Enter a negative number to exit!): ", counter + 1);
		scanf("%d", &temp);
		if (temp < 0)
		{
			ctrl = 0;
		}
		else
		{
			productInfo[counter].id = temp;
			printf("Enter item %d month: ", counter + 1);
			scanf("%d", &productInfo[counter].month);
			printf("Enter item %d year: ", counter + 1);
			scanf("%d", &productInfo[counter].year);
			printf("Enter iten %d price: ", counter + 1);
			scanf("%lf", &productInfo[counter++].price);
		}


	} while (ctrl == 1);
	printf("\nInventory inforamtion:\n\n");

	for (i = 0; i < counter; i++)
	{
		printf("ID: %d\n", productInfo[i].id);
		printf("Year: %d\n", productInfo[i].year);
		printf("Month: %d\n", productInfo[i].month);
		printf("Price: %0.2lf\n\n", productInfo[i].price);
	}

	return 0;
}
