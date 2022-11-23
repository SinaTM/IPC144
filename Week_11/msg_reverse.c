/* Get a message from the user and reverse it*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  /* toupper, isalpha */

#define SZ 100
//get the message and pass the address of the first element of reversed message
char* message_reverse(char* message) {
    int msgLength = -1, i = 0;
    char temp;

    while (message[++msgLength] != '\0')
    {
    }
    msgLength--;
   
    while (msgLength > i)
    {
        temp = message[msgLength];
        message[msgLength--] = message[i];
        message[i++] = temp;
    }
    
    return message;
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
    printf("Reverse is %s",  message_reverse(str) ); 
    
    return 0;
}


