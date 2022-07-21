/*
Ex_0812.

주어진 정수가 소수인지를 검사하는 함수 is_prime()을 작성하라.
이 함수를 이용하여 2부터 100 사이의 모든 소수를 출력하라.

*/

#include <stdio.h>

int is_prime(int n);

int main(void)
{
	int i;

	printf("2부터 100사이의 소수를 출력합니다.\n");
	for (i = 2; i <= 100; i++)
	{
		if (is_prime(i))
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}

int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0)
			return 0;
	}

	return 1;
}