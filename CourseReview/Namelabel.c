// A program that gets a name and familty name and 
// label its output
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#define SZ 30
int main(void) {

    int i;
    char ch, initial, last[SZ+1] = { 0 };

    printf("Enter a first and last name: ");

    while (isspace(ch = getchar()))
    {
        // Do nothing
    }
    initial = ch;

    // remove the first name
    while (!isspace(getchar()))
    {
        // Do nothing
    }

    // get the last name
    for (i = 0; (ch = getchar()) != '\n'; i++)
    {
        last[i] = ch; // store the last name
    }

    printf("You entered the name: ");
    for (i = 0; last[i] != '\0'; i++)
    {
        putchar(last[i]);
    }

    printf(", %c.\n", initial);

    return 0;
}
