/*A program to approximate Euler's number as
e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
until the current term is smaller than user float input Epsilon*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int i, Denom = 1;
    float e_num = 1.0f, Epsilon, temp;

    printf("Enter epsilon: ");
    scanf("%f", &Epsilon);

    for (i = 1, temp = 1.0f; temp > Epsilon; i++) {
        temp = (1.0f / (Denom *= i));
        e_num += temp;
    }
    printf("Approximation of e: %f\n", e_num);

    return 0;
}