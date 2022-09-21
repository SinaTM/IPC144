#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 1, y = 5;
	int k = ++x + y++, z = 0;
	z -= (++x);
	printf("%d %d %d %d", x, y, k, z);
	return 0;
}