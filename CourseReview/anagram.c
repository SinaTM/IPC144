// A program that test whether two words are anagrams (permutations of the same letters)

#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */

#define SZ 26

int main(void) {

    int i, keepGoing = 1, same = 1;
    int letters[SZ] = { 0 };
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
        {
            letters[toupper(ch) - 'A']++;
        }

    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
        {
            letters[toupper(ch) - 'A']--;
        }

    }

    for (i = 0; keepGoing && i < SZ; i++) {
        if (letters[i] != 0) {
            same = 0;
            keepGoing = 0;
        }
    }
    if (same)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}
