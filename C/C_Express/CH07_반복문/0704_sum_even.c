#include <stdio.h>

int main(void)
{
	int i, n, sum;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	i = 0;
	sum = 0;

	while (i <= n)
	{
		sum += i; // sum = sum + i;와 같다.
		i = i + 2; // i += 2;로 하여도 된다.
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}