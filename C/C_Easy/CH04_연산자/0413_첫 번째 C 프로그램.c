/* Ex 04_13.c */
#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, c = 3;
	int result;

	result = a + b * c % 2; // 1+2*3%2 = 1
	printf("result = %d\n", result);

	result = a > b || c > 0; // 0 | 1 = 1
	printf("result = %d\n", result);

	result = a > b || c > 0 && b > c; // 0 | 1 & 0 = 0
	printf("result = %d\n", result);

	result = ++a * b--; // 2 * 2-- = 4
	printf("result = %d\n", result);

	result = a = b = c; // 1=2=3 = 3
	printf("result = %d\n", result);

	return 0;
}