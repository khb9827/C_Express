/* 실습. 파이 구하기 */
#include <stdio.h>

int main(void)
{
	double divisor, divident, sum; // 분자, 분모, 합계
	int loop_count; // 반복 횟수

	divisor = 4.0;
	divident = 1.0;
	sum = 0.0;

	printf("반복횟수: ");
	scanf_s("%d", &loop_count);

	while (loop_count > 0)
	{
		sum = sum + divisor / divident;
		divisor = -1.0*divisor;
		divident = divident + 2.0;
		loop_count--;
	}

	printf("PI = %f\n", sum);

	return 0;
}