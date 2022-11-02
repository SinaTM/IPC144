/* A program that gets an fraction from the user and subsequently uses a funtion to reduce the
fraction to lowest terms*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reduce(int numerator, int denominator,
    int* reducedNumerator, int* reducedDenominator) {

    int m = numerator, n = denominator, r;

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    *reducedNumerator = numerator / m;
    *reducedDenominator = denominator / m;
}

int main(void) {

    int num, denom, r_num, r_denom;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);

    reduce(num, denom, &r_num, &r_denom);

    printf("In lowest terms: %d/%d\n", r_num, r_denom);

    return 0;
}




