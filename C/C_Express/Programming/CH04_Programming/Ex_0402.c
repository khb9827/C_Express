﻿/*
0402.

사용자로부터 정수를 16진수로 입력받아서 8진수, 10진수, 16진수 형태로 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int num; // 입력받을 정수

	printf("16진수 정수를 입력하시오: ");
	scanf_s("%x", &num);

	printf("8진수로는 %#o입니다.\n", num);
	printf("10진수로는 %d입니다.\n", num);
	printf("16진수로는 %#x입니다.\n", num);

	return 0;
}