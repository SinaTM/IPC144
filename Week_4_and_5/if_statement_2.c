/*A program that asks the user for a 24-hour time, then displays the time in 12-hour form*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int Hour, Min;

    printf("Enter hour: \n");
    scanf("%d", &Hour);
    printf("\nEnter minute: \n");
    scanf("%d", &Min);
    printf("\n24-hour time is: %d:%d\n", Hour, Min);
    if (Hour <= 11)
        printf("Equivalent 12-hour time: %d:%d AM\n",
            Hour == 0 ? 12 : Hour, Min);
    else
        printf("Equivalent 12-hour time: %d:%d PM\n",
            Hour == 12 ? 12 : Hour - 12, Min);

    return 0;
}
