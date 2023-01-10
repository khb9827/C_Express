/* Ex 04_01.c */
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	result = num1 + num2; // 더하기
	printf("%d + %d = %d\n", num1, num2, result);

	result = num1 - num2; // 빼기
	printf("%d - %d = %d\n", num1, num2, result);

	result = num1 * num2; // 곱하기
	printf("%d * %d = %d\n", num1, num2, result);

	result = num1 / num2; // 나누기
	printf("%d / %d = %d\n", num1, num2, result);

	result = num1 % num2; // 나머지
	printf("%d %% %d = %d\n", num1, num2, result);

	return 0;
}