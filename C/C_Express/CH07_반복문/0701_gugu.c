﻿// while문을 이용한 구구단 출력 프로그램
#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	printf("출력하고 싶은 단: ");
	scanf_s("%d", &n);
	
	while (i <= 9) // 9보다 작거나 같을때까지 반복
	{
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}

	return 0;
}