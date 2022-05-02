#include <stdio.h>

int main(void)
{
	double x, y, result;

	printf("두개의 실수를 입력하시오: ");
	scanf_s("%lf %lf", &x, &y);

	result = x + y; // 덧셈 연산
	printf("%lf + %lf = %lf\n", x, y, result);

	result = x - y; // 뺄셈 연산
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y; // 곱셈 연산
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y; // 나눗셈 연산
	printf("%lf / %lf = %lf\n", x, y, result);

	return 0;
}