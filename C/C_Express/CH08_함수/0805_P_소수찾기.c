/*
실습. 소수 찾기
*/

#include <stdio.h>

int is_prime(int);
int get_integer(void);

int main(void)
{
	int n, result;

	// 함수를 호출한다.
	n = get_integer();
	result = is_prime(n);

	if (result == 1)
		printf("%d은 소수입니다.\n", n);
	else
		printf("%d은 소수가 아닙니다.\n", n);

	return 0;
}

// 값을 입력받는 함수
int get_integer(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	return n;
}

// 약수 구하는 함수
int is_prime(int n)
{
	int divisors = 0, i;

	for (i = 1; i <= n; i++)
	{
		if (n%i == 0) // 약수 발견 시 약수의 개수를 1 증가
			divisors++;
	}

	return (divisors == 2);
}