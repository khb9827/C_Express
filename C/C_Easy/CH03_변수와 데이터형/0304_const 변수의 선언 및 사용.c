﻿/* Ex 03_04.c */
#include <stdio.h>

int main(void)
{
	const double PI = 3.14; // const 변수 선언
	const int MAX_COUNT; // 초기화되지 않았으므로 쓰레기값

	printf("PI = %f\n", PI);
	printf("MAX_COUNT = %d\n", MAX_COUNT);

	// PI = 3.1415; // const 변수는 변경 불가
	// MAX_COUNT = 100; // const 변수는 변경 불가

	return 0;
}