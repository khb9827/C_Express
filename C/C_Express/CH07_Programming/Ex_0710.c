/*
0710.

실수의 거듭 제곱값을 계산하는 프로그램을 작성하여 보자.
사용자로부터 하나의 실수 r와 거듭 제곱 횟수를 나타내는 정수 n을 입력받아서 r^n을 구하여 화면에 출력한다.

*/

#include <stdio.h>

int main(void)
{
	double d; // 실수값
	int n; // 거듭 제곱 횟수
	double result = 1; // 결과값

	printf("실수의 값을 입력하시오: ");
	scanf_s("%lf", &d);

	printf("거듭제곱 횟수를 입력하시오: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) // 거듭제곱 횟수만큼 반복
	{
		result *= d; // 횟수만큼 실수값 곱해줌
	}

	printf("결과값은 %lf\n", result);

	return 0;
}