/*
1005.

0부터 9까지 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램을 작성하시오.
난수는 rand() 함수를 사용하여 생성하라.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int main(void)
{
	srand((unsigned)time(NULL));

	int num[SIZE] = { 0 };
	int i;
	int max, index;

	for (i = 0; i < 100; i++)
	{
		++num[rand() % 10]; // 해당 수 1 증가시킴
	}

	for (i = 0; i < SIZE; i++)
		printf("num[%d]= %d\n", i, num[i]);
	printf("\n");

	max = num[0];
	for (i = 1; i < SIZE; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			index = i;
		}

	}

	printf("가장 많이 생성된 수 : %d, 횟수 : %d\n", index, max);

	return 0;
}