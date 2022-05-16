/*
0703.

반복 루프를 사용하여 다음과 같은 패턴을 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 7; i++)
	{
		for (j = 7; j > i + 1; j--)
			printf(" ");
		for (j = 0; j < i + 1; j++)
			printf("*");

		printf("\n");
	}

	return 0;
}