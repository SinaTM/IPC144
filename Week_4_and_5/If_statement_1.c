/*A program to get a number (maximum 5 digts) and show how many digits that number contains*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int Dig, Num, Ctrl  = 1; 

    printf("Enter a number: ");
    scanf("%d", &Num);

    if (Num >= 0 && Num <= 9)
        Dig = 1;
    else if (Num >= 10 && Num <= 99)
        Dig = 2;
    else if (Num >= 100 && Num <= 999)
        Dig = 3;
    else if (Num >= 1000 && Num <= 9999)
        Dig = 4;
    else if (Num >= 10000 && Num <= 99999)
        Dig = 5;
    else
        Ctrl = 0;


    if (Ctrl == 1)
       printf("The number %d has %d digits\n", Num, Dig);
    else
       printf("The number is too large!");


    return 0;
}
