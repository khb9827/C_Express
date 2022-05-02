﻿// 수학적인 조합 값을 구하는 예제
#include <stdio.h>

int get_integer(void);
int combination(int n, int r);
long factorial(int n);

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d\n", a, b, combination(a, b));

	return 0;
}

// 팩토리얼 값을 이용하여서 조합값을 계산
int combination(int n, int r)
{
	return factorial(n) / (factorial(n - r)*factorial(r));
}

// 사용자로부터 값을 입력받아서 반환
int get_integer(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	return n;
}

// 팩토리얼 값을 반환
long factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
		result *= i; // result = result * i

	return result;
}