﻿#include <stdio.h>

int main(void)
{
	int x = 10, y = 10;

	printf("x=%d\n", x);
	printf("++x의 값=%d\n", ++x); // 먼저 증가되고 증가된 값이 수식에 사용
	printf("x=%d\n", x);

	printf("y=%d\n", y);
	printf("y++의 값=%d\n", y++); // 현재 값을 먼저 수식에 사용하고 나중에 증가됨
	printf("y=%d\n", y);

	return 0;
}