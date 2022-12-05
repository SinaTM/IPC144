// A program that gets a sentence from the user and 
// counts the number of vowels
#include <stdio.h>

#define SZ 100
void vowelCount(char charArr[], int* ptrInt);
void get_sentence(char* msg);

int main(void)
{
	char wordStr[SZ + 1] = { 0 }; 
	int countVowel = 0;

	get_sentence(wordStr);
	vowelCount(wordStr, &countVowel);
	printf("%d vowels found in \'%s\'", countVowel, wordStr);
}

void get_sentence(char* msg)
{
	char ch;
	int i = 0;
	puts("Enter a sentence: ");
	while ((ch = (getchar())) != '\n' & i <= SZ)
	{
		msg[i++] = ch;
	}
}

void vowelCount(char charArr[], int* ptrInt)
{
	int i = 0;
	*ptrInt = 0;

	while (charArr[i] != '\0')
	{
		switch (charArr[i++])
		{
		case 'a': case 'e': case 'o': case 'u': case 'i':
		case 'A': case 'E': case 'O': case 'U': case 'I':
			(*ptrInt)++;
			break;
		}
	}
}

