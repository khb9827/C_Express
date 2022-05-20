﻿/*
0714.

사용자가 입력한 특정한 정수의 자리수를 반대로 출력하는 프로그램을 작성하라.
예를 들어서 사용자가 정수 1206을 입력하였다면 6021이 출력되어야 한다.
만약 음수를 입력하면 오류 메시지를 출력하라.
do...while문을 사용하여 보라.

*/

#include <stdio.h>

int main(void)
{
	int n; // 입력받을 4자리 정수
	int a, b, c, d; // 각 자리수

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	a = n % 10; // 일의 자리수
	b = (n / 10) % 10; // 십의 자리수
	c = (n / 100) % 10; // 백의 자리수
	d = (n / 1000) % 10; // 천의 자리수

	printf("%d%d%d%d", a, b, c, d);

	return 0;
}