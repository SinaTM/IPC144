#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int Num;
	printf("Enter a three-digit number: ");
	scanf("%d", &Num);
	printf("%d%d%d\n", Num % 10, (Num / 10) % 10, Num / 100);
	return 0;
}