/*A program that finds the largest in a series of numbers (float or integer) entered by the user.
The program must prompt the user to enter numbers one by one.
When the user enters 0 or a negative number, the program must display the largest nonnegative number entered*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    float largestNum = 0.0f;
    float currentNum;

    do {
        printf("Enter a number: \n");
        scanf("%f", &currentNum);

        if (currentNum > largestNum)
            largestNum = currentNum;
    } while (currentNum > 0);

    printf("\nThe largest number entered was %f\n", largestNum);

    return 0;
}
