/*A program that finds the largest and smallest of four integers entered by the user*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int n1, n2, n3, n4, max, min, max_1, max_2, min_1, min_2;

    printf("Enter four integers seperated by commas (number1,number2,number3,number4): \n");
    scanf("%d,%d,%d,%d", &n1, &n2, &n3, &n4);

    if (n1 >= n2) {
        max_1 = n1;
        min_1 = n2;
    }
    else {
        max_1 = n2;
        min_1 = n1;
    }

    if (n3 >= n4) {
        max_2 = n3;
        min_2 = n4;
    }
    else {
        max_2 = n4;
        min_2 = n3;
    }


    if (max_2 > max_1)
        max = max_2;
    else
        max = max_1;

    if (min_1 < min_2)
        min = min_1;
    else
        min = min_2;

    printf("Largest: %d\nSmallest: %d\n", max, min);

    return 0;
}
