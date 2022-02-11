/*
0504.

cm로 표현된 키를 입력받아 피트와 인치로 변환하는 프로그램을 작성하라.
단, 1피트는 12인치이고 1인치는 2.54cm이다.

*/

#include <stdio.h>

int main(void)
{
	int cm; // 입력받을 키
	int feet; // 피트
	double inch; // 인치

	printf("키를 입력하시오: ");
	scanf_s("%d", &cm);

	inch = cm / 2.54;
	feet = inch / 12;
	inch = inch - feet * 12;

	printf("%dcm는 %d피트 %lf인치입니다.\n", cm, feet, inch);

	return 0;
}