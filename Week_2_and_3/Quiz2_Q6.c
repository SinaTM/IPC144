#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	printf("Enter a three-digit number: ");
	scanf("%d", &num);
	printf("%d%d%d\n", num % 10, (num / 10) % 10, num / 100);
	return 0;
}
