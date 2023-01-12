/* Ex 04_07.c */
#include <stdio.h>

int main(void)
{
	int a = 10; // 0x0a
	int b;

	b = a << 2; // 비트 왼쪽 이동 연산자
	printf("a << 2 = %08x (%d)\n", b, b);

	b = a >> 2; // 비트 오른쪽 이동 연산자
	printf("a >> 2 = %08x (%d)\n", b, b);

	return 0;
}