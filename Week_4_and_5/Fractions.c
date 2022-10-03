/* Multiple operations on two fractions */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int Num1, Denom1, Num2, Denom2, Num_R, Num_D, Temp, Num_temp, GCD;
    char Operator;

    printf("Enter two fractions separated by an operator: ");
    scanf("%d /%d %c %d /%d", &Num1, &Denom1, &Operator, &Num2, &Denom2);

    switch (Operator) {
    case '+':
        Num_R = Num1 * Denom2 + Num2 * Denom1;
        Num_D = Denom1 * Denom2;
        break;
    case '-':
        Num_R = Num1 * Denom2 - Num2 * Denom1;
        Num_D = Denom1 * Denom2;
        break;
    case '*':
        Num_R = Num1 * Num2;
        Num_D = Denom1 * Denom2;
        break;
    case '/':
        Num_R = Num1 * Denom2;
        Num_D = Num2 * Denom1;
        break;
    default:
        printf("Operation %c not supported.\n", Operator);
        return 1; /* operation error */
    }

    Num_temp = Num_R;
    GCD = Num_D;
    while (Num_temp != 0) {
        Temp = GCD % Num_temp;
        GCD = Num_temp;
        Num_temp = Temp;
    }

    if (Num_R / GCD == Num_D / GCD)
        printf("Result: %d\n", Num_R / GCD);
    else if (Num_R > Num_D) {
        printf("Result: %d %d/%d\n",
            Num_R / Num_D, Num_R % Num_D, Num_D);
    }
    else
        printf("Result: %d/%d\n", Num_R / GCD, Num_D / GCD);

    return 0;
}
