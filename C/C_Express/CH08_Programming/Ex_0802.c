/*
0802.

화씨온도(F)를 섭씨 온도(C)로 변환하는 함수 f_to_c(double f)를 작성한다.
다음과 같은 식을 이용하라.
사용자로부터 화씨 온도를 입력받아서 함수를 호출하여 섭씨 온도로 변환한 후에 화면에 출력하도록 하라.

*/

#include <stdio.h>

double f_to_c(double f);

int main(void)
{
	double f; // 화씨온도
	printf("화씨 온도를 입력하시오: ");
	scanf_s("%lf", &f);

	printf("섭씨 온도는 %lf도입니다.\n", f_to_c(f));

	return 0;
}

// 화씨 섭씨 변환 함수
double f_to_c(double f)
{
	double c; // 섭씨 온도
	c = (5.0 / 9.0)*(f - 32.0);

	return c;
}