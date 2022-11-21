#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define SZ 30
#define NUM_PLANETS 8

int main(void)
{
	char* planets[] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune" };
	char* Name[SZ] = { 0 };
	int i, j, ctrl = 0;

	puts("Please enter a name:");
	scanf("%30[^\n]s", Name); 
	
	for (i = 1; i < NUM_PLANETS; i++)
	{
		if (strcmp(Name, planets[i]) == 0)
		{
			ctrl = 1; 
			j = i + 1; 
		}
	}

	if (ctrl)
	{
		printf("%s is planet %d\n", Name, j);
	}
	else
	{
		printf("%s is not a planet\n", Name); 
	}

	return 0; 
}
