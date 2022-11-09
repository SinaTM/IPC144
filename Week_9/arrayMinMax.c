/* Finds the largest and smallest elements in an array */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4


void max_min(int arrayInt[], int arrSize, int* max, int* min);

int main(void) {

    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int arrayInt[], int arrSize, int* max, int* min) {

    int p;
    *max = *min = arrayInt[0];
    for (p =  1; p <  arrSize; p++) {
        if (arrayInt[p] > *max)
        {
            *max = arrayInt[p];
        }
        else if (arrayInt[p] < *min)
        {
            *min = arrayInt[p];
        }
            
    }
}
