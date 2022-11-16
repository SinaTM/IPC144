#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SZ 20

//Returns the length of a given string
int strlen_func(const char* str)
{
	int count = 0; 
	while (str[count++] != '\0')
	{
		//do nothing!
	}
	return --count; 
}

// Concatenates two strings
char* strcat_func(char s1[], const char s2[])
{
	int count1 = 0;
	int count2 = 0;

	while (s1[count1] != '\0')
	{
		count1++;
	}

	while (s2[count2] != '\0')
	{
		s1[count1] = s2[count2];
		count1++; 
		count2++; 
	}

	s1[count1] = '\0';
	return s1; 

}
	
	
int main(void)
{
	//find the length of a given string:
	char str1[] = "IPC144";
	printf("Length of \"%s\" is %d\n", str1, strlen_func(str1));

	//Concatenate two given strings:
	char str2[SZ] = "I ";
	char str3[SZ] = "know C very well"; 
	printf("str2 = %s", strcat_func(str2, str3));





}
