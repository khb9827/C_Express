/*
0301.

사용자로부터 세 개의 실수를 입력받은 후, 합계와 평균값을 계산하여 화면에 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	float x, y, z; // 세 개의 실수
	float sum, avg; // 합계, 평균

	printf("실수를 입력하시오: ");
	scanf_s("%f", &x);

	printf("실수를 입력하시오: ");
	scanf_s("%f", &y);

	printf("실수를 입력하시오: ");
	scanf_s("%f", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("합계는 %f이고 평균값은 %f입니다.\n", sum, avg);

	return 0;
}