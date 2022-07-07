/*
Ex_0811.

두 점 사이의 거리를 계산하는 함수를 작성하여 보자.
2차원 공간에서 두 점 (x1, y1)와 (x2, y2) 사이의 거리를 계산하는 get_distance(double x1, double y1, double x2, double y2)를 작성하라.
다음과 같은두 점 사이의 거리르 계산하는 공식을 사용하라.
제곱근은 sqrt() 라이브러리 함수를 사용하라.

d = √(x1-x2)^2 + (y1-y2)^2

*/

#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main(void)
{
	double x1, y1, x2, y2;

	printf("첫번째 점의 좌표를 입력하시오:(x,y) ");
	scanf_s("%lf %lf", &x1, &y1);

	printf("두번째 점의 좌표를 입력하시오:(x,y) ");
	scanf_s("%lf %lf", &x2, &y2);

	printf("두 점 사이의 거리는 %lf입니다.\n", get_distance(x1, y1, x2, y2));

	return 0;
}

// 두 점 사이의 거리 구하는 함수
double get_distance(double x1, double y1, double x2, double y2)
{
	double res;
	res = pow(x1 - x2,2) + pow(y1 - y2,2);

	return sqrt(res); // 제곱근 계산 후 리턴
}