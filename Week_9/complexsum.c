#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct Complex
{
    float real;
    float imag;
} complex;

void addNumbers(complex c1, complex c2, complex* result);

int main()
{
    complex complexNum1, complexNum2, complexSum;

    printf("For first number,\n");
    printf("Enter real part: ");
    scanf("%f", &complexNum1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &complexNum1.imag);

    printf("For second number, \n");
    printf("Enter real part: ");
    scanf("%f", &complexNum2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &complexNum2.imag);

    addNumbers(complexNum1, complexNum2, &complexSum);
    printf("\nresult.real = %.1f\n", complexSum.real);
    printf("result.imag = %.1f", complexSum.imag);

    return 0;
}
void addNumbers(complex c1, complex c2, complex* result)
{
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag;
}
