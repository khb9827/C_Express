/*
0815.

실수를 정수로 변환하면 소수점 이하는 잘려서 없어지게 된다.
예를 들어서 6.999를 정수로 변환하면 6이 된다.
실수에 0.5를 더하여 소수점 이하를 버리는 반올림 연산을 수행하는 함수 round(double f)를 작성하라.
단, f는 양수라고 가정하라.

*/

#include <stdio.h>

double round(double f);

int main(void)
{
	double f;
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &f);

	printf("반올림한 값은 %lf입니다.\n", round(f));

	return 0;
}

// 반올림하는 함수
double round(double f)
{
	return (int)(f + 0.5);
}