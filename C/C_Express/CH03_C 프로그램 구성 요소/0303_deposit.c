﻿/* 저축액을 계산하는 프로그램 */
#include <stdio.h>

int main(void)
{
	int salary; // 월급
	int deposit; // 저축액

	printf("월급을 입력하시오: ");
	scanf_s("%d", &salary);

	deposit = 10 * 12 * salary;

	printf("10년 동안의 저축액: %d\n", deposit);

	return 0;
}