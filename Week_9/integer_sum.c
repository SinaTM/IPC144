/* This program calculates sum of integer numbers using pointers*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int i, arrInt[6], sum = 0;

    printf("Enter 6 numbers: ");

    for (i = 0; i < 6; ++i) {
        // Equivalent to scanf("%d", &x[i]);
        scanf("%d", arrInt + i);

        // Equivalent to sum += x[i]
        sum += *(arrInt + i);
    }

    printf("Sum = %d", sum);

    return 0;
}
