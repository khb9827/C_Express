/*
0407.

물리학에서 운동에너지는 E=mv^2/2.0으로 계산된다.
사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 계산하는 프로그램을 작성하여 보자.
모든 변수는 dobule형을 사용하라.

*/

#include <stdio.h>

int main(void)
{
	double m; // 질량
	double v; // 속도
	double e; // 운동 에너지

	printf("질량: ");
	scanf_s("%lf", &m);

	printf("속도: ");
	scanf_s("%lf", &v);

	e = m * v*v / 2.0;
	printf("운동에너지: %lf \n",e);

	return 0;
}