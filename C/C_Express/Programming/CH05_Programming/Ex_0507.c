﻿/*
0507.

정수에 비트 연산자 <<를 한번 적용하면 2를 곱한 값을 얻을 수 있다.
또 정수에 비트 연산자 >>를 한번 적용하면 2로 나눈 값을 얻을 수 있다.
사용자로부터 정수 x,y를 입력받아서 x<<y의 값을 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int x, y; // 정수, 곱할 횟수
	int result;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	printf("2를 곱하고 싶은 횟수: ");
	scanf_s("%d", &y);

	result = x << y;
	printf("%d<<%d의 값: %d\n", x, y, result);

	return 0;
}