#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int* p;
    int val[7] = { 11, 22, 33, 44, 55, 66, 77 };
    p = val;
    for (int i = 0; i < 7; i++)
    {
        printf("val[%d]: value is %d and address is %p\n", i, *(p + i), (p + i));
    }
    return 0;
}
