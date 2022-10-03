/* This program sums a series of numbers (using double variables) */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

    double Num, Sum = 0.0;

    printf("This program sums a series of floating-point numbers.\n");
    printf("Enter numbers (0 to terminate): ");

    scanf("%lf", &Num);
    while (Num != 0.0) {
        Sum += Num;
        scanf("%lf", &Num);
    }
    printf("The sum is: %f\n", Sum);

    return 0;
}
