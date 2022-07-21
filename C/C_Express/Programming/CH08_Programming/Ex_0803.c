/*
0803.

원의 면적을 구하는 문제를 함수로 작성하여 보자.
다음과 같은 식을 이용하라.
원의 면적을 구하는 함수 cal_area(double radius)를 작성하고 함수를 호출하여 원의 면적을 출력하는 전체 프로그램을 완성하라.

*/

#include <stdio.h>
#define PIE 3.141592

double cal_area(double radius);

int main(void)
{
	double r; // 원의 반지름
	printf("원의 반지름을 입력하시오: ");
	scanf_s("%lf", &r);

	printf("원의 면적은 %lf입니다.\n", cal_area(r));

	return 0;
}

// 원의 면적 구하는 함수
double cal_area(double radius)
{
	double area;
	area = PIE * radius*radius;

	return area;
}