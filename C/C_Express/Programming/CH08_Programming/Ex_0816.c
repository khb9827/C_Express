/*
0816.

두개의 부동 소수점 수가 근사적으로 같은 값이면 1를 반환하고 근사적으로 같지 않으면 0를 넘겨주는 함수 f_equal(a,b)을 작성하라.
근사적으로 같다고 하는 것은 다음의 부등식을 만족하는 경우라고 가정한다.

|a-b| / min(|a|,|b|) < e

부동 소수점 수의 절대값을 구하는 함수와 두수 중에서 최소값을 찾는 함수는 스스로 제작하여 사용하라.
e는 상수로서 0.000001로 정의된다.

*/

#include <stdio.h>
#define e 0.000001

int f_equal(double a, double b);
double f_abs(double a);
double f_min(double a, double b);

int main(void)
{
	double a, b;
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &a);

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &b);

	if (f_equal(a, b))
		printf("두 개의 실수는 서로 같음\n");
	else
		printf("두 개의 실수는 서로 다름\n");

	return 0;
}

// 근사값 같으면 1, 다르면 0 반환
int f_equal(double a, double b)
{
	double res;
	res = f_abs(a - b) / f_min(f_abs(a), f_abs(b));

	if (res < e)
		return 1;
	else
		return 0;
}

// 절대값
double f_abs(double a)
{
	if (a < 0)
		a = a * -1;
	
	return a;
}

// 최소값
double f_min(double a, double b)
{
	if (a < b)
		return a;
	else
		return b;
}