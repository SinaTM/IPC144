/*
A program to use get 5 double numbers from the user and use an array to store them.
Then the program calculates the sum and average of the numbers entered by the user.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  
#define MAX 5
int  main()
{
    double ar1[MAX], sum = 0.0, average;
    int i;
    printf("Input %d elements in the array :\n", MAX);

    //get user input:
    for (i = 0; i < MAX; i++)
    {
        printf("Input the element %d:\n", i + 1);
        scanf("%lf", &ar1[i]);
    }

    printf("\nElements in array are: ");
    for (i = 0; i < MAX; i++)
    {
        printf("%.2f  ", ar1[i]);
    }

    //Calculate the sum of all elements
    for (i = 0; i < MAX; i++)
    {
        sum += ar1[i]; // sum = sum + ary[i]
    }
    average = sum / MAX;
    printf("\nThe sum and average are %.2f and %.2f", sum, average);
    printf("\n");
}






