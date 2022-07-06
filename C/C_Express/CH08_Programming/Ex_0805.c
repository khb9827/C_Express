/*
Ex_0805.

sin() 라이브러리 함수를 호출하여서 0도부터 180도까지 10도 단위로 사인 함수 값을 출력하여 보자.
추가적으로 아예 각도를 받아서 사인값을 반환하는 함수 sin_degree(double degree)를 작성하여 문제를 해결할 수 있는가?

*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double sin_degree(double degree);

int main(void)
{
	int degree; // 각도
	double radian; // 라디안

	for (degree = 0; degree <= 180; degree+=10)
	{
		radian = sin_degree(degree); // sin함수의 인수 radian 값 변환
		printf("sin(%d)의 값은 %lf\n", degree, sin(degree)); // 값 출력
	}

	return 0;
}

double sin_degree(double degree)
{
	double res = 0; // 결과
	res = (PI*degree) / 180.0;

	return res;
}