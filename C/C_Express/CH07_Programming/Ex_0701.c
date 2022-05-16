/*
0701.

1부터 100 사이의 모든 3의 배수의 합을 계산하여 출력하는 프로그램을 다음의 3가지 반복구조를 사용하여 작성하라.

(a) while 루프
(b) for 루프
(c) do-while 루프

*/

#include <stdio.h>

int main(void)
{
	int i=1, sum = 0;

	// (a) while 루프
	while (i <= 100)
	{
		if (i % 3 == 0)
			sum += i;

		i++;
	}

	// (b) for 루프	
	for (i; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	
	// (c) do-while 루프
	do
	{
		if (i % 3 == 0)
			sum += i;

		i++;
	} while (i <= 100);

	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);

	return 0;
}