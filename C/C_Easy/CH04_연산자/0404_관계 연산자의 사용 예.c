/* Ex 04_04.c */
#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;

	printf("a = %d, b = %d\n", a, b); // a=10, b=20
	printf("a >  b = %d\n", a > b); // 10>20 = 0
	printf("a >= b = %d\n", a >= b); // 10>=20 = 0
	printf("a <  b = %d\n", a < b); // 10<20 = 1
	printf("a <= b = %d\n", a <= b); // 10<=20 = 1
	printf("a == b = %d\n", a == b); // 10==20 = 0
	printf("a != b = %d\n", a != b); // 10!=20 = 1

	return 0;
}