/*
0502.

2개의 double형의 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	double a, b; // 2개의 입력받을 실수
	double sum, sub, mul, div; // 합, 차, 곱, 몫

	printf("2개의 실수를 입력하시오: ");
	scanf_s("%lf %lf", &a, &b);

	sum = a + b; // 합
	sub = a - b; // 차
	mul = a * b; // 곱
	div = a / b; // 몫
	
	printf("%lf %lf %lf %lf\n", sum, sub, mul, div);

	return 0;
}