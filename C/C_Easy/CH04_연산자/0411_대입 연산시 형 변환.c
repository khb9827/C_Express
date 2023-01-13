/* Ex 04_11.c */
#include <stdio.h>

int main(void)
{
	int num;
	double f;

	num = 3.14; // 대입 연산시 자동 형 변환(실수 -> 정수, 값 손실 발생)
	printf("num = %d\n", num);

	f = 123; // 대입 연산시 자동 형 변환(정수 -> 실수)
	printf("f = %f\n", f);

	return 0;
}