/*A program that user enters two dates and the program shows which dates comes earlier
on the calendar*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

    int date1, date2, month1, month2, year1, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month1, &date1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month2, &date2, &year2);

    if (year2 > year1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, date1, year1, month2, date2, year2);
    else if (year1 > year2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, date2, year2, month1, date1, year1);
    else if (month2 > month1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, date1, year1, month2, date2, year2);
    else if (month1 > month2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, date2, year2, month1, date1, year1);
    else if (date2 > date1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, date1, year1, month2, date2, year2);
    else if (date1 > date2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, date2, year2, month1, date1, year1);
    else
        printf("%d/%d/%.2d is equal to %d/%d/%.2d\n", month1, date1, year1, month2, date2, year2);

    return 0;
}