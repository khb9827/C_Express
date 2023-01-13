/* Ex 04_10.c */
#include <stdio.h>

int main(void)
{
	short a = 500;
	short b = 800;
	short c;

	printf("a * b = %d\n", a*b); // 승진에 의한 형 변환

	c = a * b;
	printf("c = %d\n", c); // 오버플로우 발생

	return 0;
}