/* Calculates factorial of a number */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int ii, num;
    long double fact = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (ii = num; ii > 1; ii--)
        fact *= ii;

    printf("Factorial of %d: %Lf\n", num, fact);

    return 0;
}
