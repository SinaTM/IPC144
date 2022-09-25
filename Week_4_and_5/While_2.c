/*A program that asks the user to enter two integers, then calculates and displays their greatest common divisor*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int Num_1, Num_2, Div;

    printf("Enter the first integer: \n");
    scanf("%d", &Num_1);
    printf("Enter the second integer:\n");
    scanf("%d", &Num_2);

    while (Num_2 != 0) {
        Div = Num_1 % Num_2;
        Num_1 = Num_2;
        Num_2 = Div;
    }

    printf("Greatest common divisor: %d\n", Num_1);

    return 0;
}

