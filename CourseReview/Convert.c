// A program that converts all letters in a file to upper case and writes
// them to a new file. The input file name is "input.txt" and the ouput file 
// name is "output.txt"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

int main(void)
{
    FILE *fp1 = NULL, *fp2 = NULL; 
    char ch; 


    if ( ( fp1 = fopen(INPUT_FILE, "r") ) != NULL && ( fp2 = fopen(OUTPUT_FILE, "w") ) != NULL )
    {
        while ( (ch = getc(fp1)) != EOF)
        {
             
            if (isalpha(ch))
            {
                putchar(toupper(ch));
                fputc(toupper(ch), fp2);
            }
            else
            {
                putchar(ch);
                fputc(ch, fp2);
            }
                
        }
        fclose(fp1);
        fp1 = NULL; 
        fclose(fp2); 
        fp2 = NULL; 
    }

    return 0;
}
