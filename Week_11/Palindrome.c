
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  /* toupper, isalpha */

#define SZ 100

int palindrome_check(const char* message) {

    int length = strlen(message) - 1, i = 0;
    int output = 1; // stores the output of the function

    while (length > i && output)
    {
        if (message[length] != message[i])
        {
            output = 0;
        }
        length--;
        i++;
    }
    
    return output;
}

void get_message(char* msg)
{
    char ch;
    int i = 0;
    puts("Enter a message: ");
    while (( ch = toupper(getchar())) != '\n' & i <= SZ) 
    {
        if (isalpha(ch))
        {
            msg[i++] = ch;
        }
    }
}

int main(void) {

    char str[SZ] = {0};
  
    get_message(str);
    
    if (palindrome_check(str))
    {
        printf("Input \"%s\" is Palindrome\n", str);
    
    }
    else
    {
        printf("Input \"%s\" is not Palindrome\n", str);
    }
    
 
    return 0;
}


