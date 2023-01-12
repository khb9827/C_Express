/* Ex 04_08.c */
#include <stdio.h>

int main(void)
{
	int num;

	num = 5; // 대입 연산자
	printf("num = %d\n", num);

	num += 2; // 복합 대입 연산자
	printf("num = %d\n", num);

	num *= 2; // 복합 대입 연산자
	printf("num = %d\n", num);

	num |= 3; // 복합 대입 연산자
	printf("num = %d\n", num);

	num <<= 2; // 복합 대입 연산자
	printf("num = %d\n", num);

	return 0;
}