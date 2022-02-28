/*
0609.

다음과 같이 정의되는 함수의 함수값을 계산하여 보자.
사용자로부터 x값을 입력받아서 함수값을 계산하여 화면에 출력한다.
x는 실수이다.

f(x) = x^3-9x+2 (x<=0)
     = 7x+2 (x>0)

*/

#include <stdio.h>

int main(void)
{
	double x; // 입력받을 실수 값
	double result; // 결과값

	printf("x의 값을 입력하시오: ");
	scanf_s("%lf", &x);

	if (x <= 0)
		result = x * x*x - 9 * x + 2;
	else
		result = 7 * x + 2;

	printf("f(x)의 값은 %lf\n", result);

	return 0;
}