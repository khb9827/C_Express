/*
0814.

우리는 앞에서 윤년을 구하는 알고리즘을 학습하였다.
이것을 함수 is_leap(int year)함수로 작성하고 이 함수를 사용하여서 1년이 몇 일인지를 출력한느 프로그램을 작성하여 보자.

*/

#include <stdio.h>

int is_leap(int year);

int main(void)
{
	int year;
	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	printf("%d년은 %d일입니다.\n", year, is_leap(year));

	return 0;
}

// 윤년 구하는 함수
int is_leap(int year)
{
	int days;
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) // 윤년
		days = 366;
	else // 평년
		days = 365;

	return days;
}