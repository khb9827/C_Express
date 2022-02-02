/*
0405.

우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램을 작성하라.
여기서 1평은 3.3m^2이다.
변수들의 자료형은 어떤 것을 선택하는 것이 좋은가?
기호 상수를 이용하여 1평당 제곱미터를 나타내어라.

*/

#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058 // 제곱미터

int main(void)
{
	int pyeong; // 평
	double sq_meter; // 평방미터

	printf("평을 입력하세요: ");
	scanf_s("%d", &pyeong);

	sq_meter = pyeong * SQMETER_PER_PYEONG;
	printf("%lf평방미터입니다.\n", sq_meter);

	return 0;
}