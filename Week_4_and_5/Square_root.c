/* Calculates square root of a positive real number */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

    double a, b = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &a);

    while (fabs((b + a / b) / 2 - b) > .00001 * b)
        b = (b + a / b) / 2;

    printf("Square root: %lf\n", b);

    return 0;
}
