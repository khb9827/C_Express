/*
0709.

(1+2+3+...+n)가 10000을 넘지 않으면서 가장 큰 값과 그 때의 n의 값을 구하라.

*/

#include <stdio.h>

int main(void)
{
	int i = 1; // 시작값
	int n; // 종료값
	int sum = 0; // 10000을 넘지 않는 합계

	while (1)
	{
		sum += i;

		if (sum > 10000)
		{
			// 바로 전 값을 저장(10000을 넘으므로)
			sum = sum - i; 
			n = i - 1;
			break;
		}

		i++;
	}

	printf("1부터 %d까지의 합이 %d입니다.\n", n, sum);

	return 0;
}