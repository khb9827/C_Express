/*
0305.

다항식 3x^2 + 7x + 11의 값을 계산하는 프로그램을 작성하라.
x의 값은 실수로 사용자에게 입력받는다.

*/

#include <stdio.h>

int main(void)
{
	double x; // 입력받을 실수
	double result; // 다항식 결과값

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &x);

	result = (3.0*x*x) + (7.0*x) + 11;
	printf("다항식의 값은 %lf \n", result);

	return 0;
}