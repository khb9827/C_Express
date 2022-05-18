/*
0707.

2와 100 사이에 있는 모든 소수(prime number)를 찾는 프로그램을 작성하라.
정수가 소수가 되려면 1과 자기 자신만을 약수로 가져야 한다.

*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0) // 0으로 나누어지면 약수가있는 것이므로 종료
				break;
		}
		if (i == j) // 자기 자신일 경우 소수이므로 출력
			printf("%d ", i);
	}

	return 0;
}