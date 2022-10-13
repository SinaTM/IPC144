/* Multiple operations on two fractions */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int num1, denom1, num2, denom2, numR, numD, temp, numTemp, gcd;
    char operatorChar;

    printf("Enter two fractions separated by an operator: ");
    scanf("%d /%d %c %d /%d", &num1, &denom1, &operatorChar, &num2, &denom2);

    switch (operatorChar) {
    case '+':
        numR = num1 * denom2 + num2 * denom1;
        numD = denom1 * denom2;
        break;
    case '-':
        numR = num1 * denom2 - num2 * denom1;
        numD = denom1 * denom2;
        break;
    case '*':
        numR = num1 * num2;
        numD = denom1 * denom2;
        break;
    case '/':
        numR = num1 * denom2;
        numD = num2 * denom1;
        break;
    default:
        printf("Operation %c not supported.\n", operatorChar);
        return 1; /* operation error */
    }

    //use Euclidean Algorithm for finding the greatest common divisor (GCD)
    numTemp = numR;
    gcd = numD;
    while (numTemp != 0) {
        temp = gcd % numTemp;
        gcd = numTemp;
        numTemp = temp;
    }
    // show the output
    if (numR / gcd == numD / gcd)
        printf("Result: %d\n", numR / gcd);
    else if (numR > numD) {
        printf("Result: %d %d/%d\n",
            numR / numD, numR % numD, numD);
    }
    else
        printf("Result: %d/%d\n", numR / gcd, numD / gcd);

    return 0;
}
