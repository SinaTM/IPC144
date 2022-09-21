#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 2;
	++x;
	int y = x * x;
	y %= 5;
	printf("value of y is:%d", y);
	return 0;
}