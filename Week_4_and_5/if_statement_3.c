/*A program that finds the largest and smallest of four integers entered by the user*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int N1, N2, N3, N4, Max, Min, Max_1, Max_2, Min_1, Min_2;

    printf("Enter four integers seperated by commas (number1,number2,number3,number4): \n");
    scanf("%d,%d,%d,%d", &N1, &N2, &N3, &N4);

    if (N1 >= N2) {
        Max_1 = N1;
        Min_1 = N2;
    }
    else {
        Max_1 = N2;
        Min_1 = N1;
    }

    if (N3 >= N4) {
        Max_2 = N3;
        Min_2 = N4;
    }
    else {
        Max_2 = N4;
        Min_2 = N3;
    }


    if (Max_2 > Max_1)
        Max = Max_2;
    else
        Max = Max_1;

    if (Min_1 < Min_2)
        Min = Min_1;
    else
        Min = Min_2;

    printf("Largest: %d\nSmallest: %d\n", Max, Min);

    return 0;
}
