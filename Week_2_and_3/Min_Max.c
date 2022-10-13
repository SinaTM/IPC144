#include <stdio.h>
#include <limits.h> //This header is used give the maximum and minimum sizes of the various integers
//The values you get from this code depents on the machine architecture
int main(void)
{
	//with unsigned keywork all the bits are used to store the number and the first bit is not used to store the sign!
	unsigned long num = ULONG_MAX;

	printf("maximum int = %i\n, ", INT_MAX);
	printf("minimum int = %i\n", INT_MIN);
	printf("maximum unsigned = %u\n", UINT_MAX);
	printf("maximum long int = %li\n", LONG_MAX);
	printf("maximum unsigned long = %lu\n", num);

	return 0;

}
