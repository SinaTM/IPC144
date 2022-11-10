/* calculates n! using recursive function*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    int n, nFactorial;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    nFactorial = factorialCalc(n);
    
    printf("n! = %d", nFactorial);
    return 0;
}

int factorialCalc(int n)
{
    int output; 
    if (n > 1)
    {
        output = n * factorialCalc(n - 1);
    }
    else 
    {
        output = 1; 
    }
    return output; 
}
