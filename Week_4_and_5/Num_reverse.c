/*A program that gets an integer and shows its reverse*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int Num;

    printf("Enter an integer: ");
    scanf("%d", &Num);

    printf("Digits reversed: ");

    do {
        printf("%d", Num % 10);
        Num /= 10;
    } while (Num != 0);

    printf("\n");

    return 0;
}
