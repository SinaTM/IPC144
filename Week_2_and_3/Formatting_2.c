#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int int1 = 21;
	float fl1 = 342.92f;
	printf("|%d|%6d|%-6d|%6.3d|\n", int1, int1, int1, int1);
	printf("|%9.3f|%9.3e|%-9g|%-9.3e|%-9.3f|\n", fl1, fl1, fl1, fl1, fl1);

	return 0;

}
