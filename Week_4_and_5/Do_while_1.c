/*A program that finds the largest in a series of numbers (float or integer) entered by the user. 
The program must prompt the user to enter numbers one by one.
When the user enters 0 or a negative number, the program must display the largest nonnegative number entered*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    float Largest_Num = 0.0f;
    float Current_Num;

    do {
        printf("Enter a number: \n");
        scanf("%f", &Current_Num);

        if (Current_Num > Largest_Num)
            Largest_Num = Current_Num;
    } while (Current_Num > 0);

    printf("\nThe largest number entered was %f\n", Largest_Num);

    return 0;
}
