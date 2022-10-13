/*A program to approximate Euler's number as
e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
until the current term is smaller than user float input Epsilon*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int i, denom = 1;
    float eNum = 1.0f, epsilon, temp;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (i = 1, temp = 1.0f; temp > epsilon; i++) {
        temp = (1.0f / (denom *= i));
        eNum += temp;
    }
    printf("Approximation of e: %f\n", eNum);

    return 0;
}
