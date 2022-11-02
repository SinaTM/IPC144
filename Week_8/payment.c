/* A function that determines the smallers number of $1, $5, $10, and $20 bills neccessary to pay
the amount represented by the dollars parameter*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones) {

    *twenties = dollars / 20;
    dollars -= *twenties * 20;
    *tens = dollars / 10;
    dollars -= *tens * 10;
    *fives = dollars / 5;
    dollars -= *fives * 5;
    *ones = dollars;
}

int main(void) {

    int money = 0, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &money);
    pay_amount(money, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}
