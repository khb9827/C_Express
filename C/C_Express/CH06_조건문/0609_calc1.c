﻿// 간단한 산술 계산기 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result; 

	printf("수식을 입력하시오\n");
	printf("(예: 2 + 5) \n");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("지원되지 않는 연산자입니다.\n");

	printf("%d %c %d = %d\n", x, op, y, result);

	return 0;
}