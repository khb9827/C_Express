/*
1001.

배열 days[]를 아래와 같이 초기화하고 배열 원소의 값을 다음과 같이 출력하는 프로그램을 작성하라.

 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31

*/

#include <stdio.h>

int main(void)
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int month;

	for (month = 1; month <= 12; month++)
	{
		printf("%d월은 %d일까지 있습니다.\n", month, days[month-1]); // 배열 원소는 0~11까지이므로 -1해줌
	}

	return 9;
}