﻿/*
실습. 윤년
*/
#include <stdio.h>

int main(void)
{
	int year, result;
	
	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("result=%d \n", result);

	return 0;
}