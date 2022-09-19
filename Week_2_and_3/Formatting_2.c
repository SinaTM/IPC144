#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Int_1 = 21;
	float FL_1 = 342.92f;
	printf("|%d|%6d|%-6d|%6.3d|\n", Int_1, Int_1, Int_1, Int_1);
	printf("|%9.3f|%9.3e|%-9g|%-9.3e|%-9.3f|\n", FL_1, FL_1, FL_1, FL_1, FL_1);

	return 0; 


}