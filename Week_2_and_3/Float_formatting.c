#include <stdio.h>

int main(void)
{
	double a = 4.3253, b = 2.3e-3, c = 91000000.0;

	printf("a=%lf\tb=%lf\tc=%lf\n", a, b, c);
	printf("a=%7.2f\tb=%0.3e\tc=%0.3lg\n", a, b, c);
	printf("a=%le\tb=%le\tc=%le\n", a, b, c);
	printf("a=%lg\tb=%lg\tc=%lg\n", a, b, c);

	return 0; 

}