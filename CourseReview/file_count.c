// A program that counts the number of characters, words and lines a file
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#define FILE_NAME "input.txt"

int main(void)
{
    FILE* fp = NULL; 
    unsigned long long int chCount = 0, wordCount = 0, lineCount = 0; 
    char ch; 
    int inWord = 0; 

    if ( (fp = fopen(FILE_NAME, "r") ) != NULL)
    {
       
        while ( (ch = fgetc(fp)) != EOF)
        {
            chCount++; // increment character count

            if (!isspace(ch))
            {
                if (!inWord)
                {
                    wordCount++; // Increment word count
                    inWord = 1;
                }
            }
            else
            {
                inWord = 0;
            }

            if (ch == '\n')
            {
                lineCount++; // Increment line count
            }

        }

  
    }
    else
    {
        printf("ERROR: Could not open the file for reading!");
    }

    printf("Number of characters in file is %d\n", chCount); 
    printf("Number of words in file is %d\n", wordCount);
    printf("Number of lines in file is %d\n", lineCount);

    return 0;
}
