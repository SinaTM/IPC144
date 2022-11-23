/* Get a message from the user and reverse it*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  /* toupper, isalpha */

#define SZ 100
//get the message and pass the address of the first element of reversed message

double averageWordLength(const char* msg)
{
    int length = 0, words = 0, i = 0;

    while ( msg[i] != '\0')
    {
        while (msg[i] != '\0' && !isspace(msg[i]))
        {
            i++;
            length++;
        }
        words++;
        while (msg[i] != '\0' && isspace(msg[i]))
        {
            i++;
        }
    }
    return (double)length / words;
}


void get_message(char* msg)
{
    char ch;
    int i = 0;
    puts("Enter a message: ");
    while (( ch = (getchar())) != '\n' & i <= SZ) 
    {
            msg[i++] = ch;
    }
}

int main(void) {

    char str[SZ] = {0};
    
    get_message(str);
    puts(str);
    printf("Average word length is: %.2f\n",
        averageWordLength(str));
    
    return 0;
}


