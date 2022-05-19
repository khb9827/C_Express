/*
0711.

1^2 + 2^2 + 3^2 + ... + n^2의 값을 계산하여 출력하여 보자.

*/

#include <stdio.h>

int main(void)
{
	int n; // 입력받을 정수
	int result = 0; // 계산값

	printf("n의 값을 입력하시오: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) // 1~n 반복
	{
		result += i * i; // 제곱값 구해서 더해줌
	}

	printf("계산값은 %d입니다.\n", result);

	return 0;
}