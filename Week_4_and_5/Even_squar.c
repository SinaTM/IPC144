/*A program that promts the user to enter an integer number, then prints all even
squars between 1 and n*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int num, ii;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (ii = 1; ii * ii <= num; ii++) {
        if ((ii * ii) % 2 != 0)
            continue;
        printf("%d\n", ii * ii);
    }

    return 0;
}


