/*
0406.

다음과 같은 수식의 값을 계산하여 화면에 출력하는 프로그램을 작성하라.
지수 표기법을 사용하여 변수들을 초기화한다.

3.32x10^-3 + 9.76x10^-8

*/

#include <stdio.h>

int main(void)
{
	double result; // 수식 결과값

	result = (3.32e-3) + (9.76e-8);

	printf("%lf \n", result);

	return 0;
}