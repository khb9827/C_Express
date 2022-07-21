/*
Ex_0810.

두 개의 정수 n,m을 입력받아서 n이 m의 배수이면 1을 반환하고 그렇지 않으면 0을 반환하는 함수 is_multiple(int n, int m)를 작성하고 테스트하여 보자.

*/

#include <stdio.h>

int is_multiple(int n, int m);

int main(void)
{
	int n, m; // 입력받을 두 정수
	printf("첫 번째 정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("두 번째 정수를 입력하시오: ");
	scanf_s("%d", &m);

	if (is_multiple(n, m) == 1)
		printf("%d는 %d의 배수입니다.\n", n, m);
	else
		printf("%d는 %d의 배수가 아닙니다.\n", n, m);

	return 0;
}

int is_multiple(int n, int m)
{
	if (n%m == 0)
		return 1;
	else
		return 0;
}