/*
실습. 산술계산기#2

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("수식을 입력하시오\n");
	printf("(예: 2 + 5)\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
	case '+':
		result = x + y;
		break;

	case '-':
		result = x - y;
		break;

	case '*':
		result = x * y;
		break;

	case '/':
		result = x / y;
		break;

	case '%':
		result = x % y;
		break;
	}

	printf("%d %c %d = %d\n", x, op, y, result);

	return 0;
}