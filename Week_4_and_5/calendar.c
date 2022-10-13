/*A program that prints a one-month calendar. The user specifies the number of day
in the month and the day of the wekk on which the month begins*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int num, day = 1, weekDay, ii;

    printf("Enter number of days in month: ");
    scanf("%d", &num);
    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &weekDay);

    printf("\n Mo Tu We Th Fr Sa Su\n");

    for (ii = 1; ii <= num + weekDay - 1; ii++) {
        if (ii < weekDay)
            printf("   ");
        else
            printf("%3d", day++);
        if (ii % 7 == 0)
            printf("\n");
    }

    printf("\n");
    return 0;
}


