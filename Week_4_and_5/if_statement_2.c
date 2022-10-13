/*A program that asks the user for a 24-hour time, then displays the time in 12-hour form*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int hour, minute;

    printf("Enter hour: \n");
    scanf("%d", &hour);
    printf("\nEnter minute: \n");
    scanf("%d", &minute);
    printf("\n24-hour time is: %d:%d\n", hour, minute);
    if (hour <= 11)
        printf("Equivalent 12-hour time: %d:%d AM\n",
            hour == 0 ? 12 : hour, minute);
    else
        printf("Equivalent 12-hour time: %d:%d PM\n",
            hour == 12 ? 12 : hour - 12, minute);

    return 0;
}
