/* Calculates factorial of a number */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    int ii, Num;
    long double fact = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &Num);

    for (ii = Num; ii > 1; ii--)
        fact *= ii;

    printf("Factorial of %d: %Lf\n", Num, fact);

    return 0;
}
