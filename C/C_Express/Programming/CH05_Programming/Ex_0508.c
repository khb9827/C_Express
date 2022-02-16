/*
0508.

구의 표면적과 체적을 구하는 프로그램을 작성하라.
구의 반지름은 실수로 입력된다.
아래의 공식을 사용하라.
파이값은 기호 상수를 사용하여 정의하라.

A = 4*PIE*r*r
V = 4/3*PIE*r*r*r

*/

#include <stdio.h>
#define PIE 3.14

int main(void)
{
	double r; // 입력받을 반지름
	double a, v; // 표면적, 체적

	printf("반지름 입력: ");
	scanf_s("%lf", &r);

	a = 4 * PIE*r*r;
	v = (4.0 / 3.0) * PIE*r*r*r;

	printf("표면적: %lf, 체적: %lf\n", a, v);

	return 0;
}