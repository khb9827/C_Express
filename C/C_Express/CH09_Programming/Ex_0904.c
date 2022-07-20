/*
0904.

다음과 같은 무한 수열을 계산하는 순환적인 프로그램을 작성하라.

1/1 + 1/2 + 1/3 + ... + 1/n

*/

#include <stdio.h>

double recursive(int n)
{
	if (n == 1)
		return 1.0;
	else
		return 1.0 / n + recursive(n - 1);
}

int main(void)
{
	int n;
	double result = 0;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	result += recursive(n);
	printf("무한수열 값 : %lf\n", result);

	return 0;
}