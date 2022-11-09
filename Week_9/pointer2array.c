#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arrInt[5] = { 1, 2, 3, 4, 5 };
	int* ptr;

	// ptr is assigned the address of the third element
	ptr = &arrInt[2];

	printf("*ptr = %d \n", *ptr);   // 3
	printf("*(ptr+1) = %d \n", *(ptr + 1)); // 4
	printf("*(ptr-1) = %d", *(ptr - 1));  // 2

	return 0;
}
