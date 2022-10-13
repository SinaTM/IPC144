/*A program to approximate Euler's number as
e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
where n is an integer entered by the user*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int ii, num, denom = 1;
    float e = 1.0f;

    printf("Enter integer n: ");
    scanf("%d", &num);


    for (ii = 1; ii <= num; ii++) {
        e += 1.0f / (denom *= ii);
    }
    printf("Approximation of e: %f\n", e);

    return 0;
}
