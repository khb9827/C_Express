/* Ex 04_06.c */
#include <stdio.h>

int main(void)
{
	int a = 10; // 0x0a
	int b = 12; // 0x0c
	int c;

	c = a & b; // 비트 AND 연산자
	printf("a & b = %08x (%d)\n", c, c);

	c = a | b; // 비트 OR 연산자
	printf("a | b = %08x (%d)\n", c, c);

	c = a ^ b; // 비트 XOR 연산자
	printf("a ^ b = %08x (%d)\n", c, c);

	c = ~a; // 비트 NOT 연산자
	printf("~a    = %08x (%d)\n", c, c);

	return 0;
}