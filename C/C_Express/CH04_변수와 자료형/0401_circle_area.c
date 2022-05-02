/* 원의 면적을 계산하는 프로그램 */
#include <stdio.h>

int main(void)
{
	// 변수
	float radius; // 원의 반지름
	float area; // 원의 면적

	printf("원의 반지름을 입력하시오: ");
	scanf_s("%f", &radius);

	area = 3.141592*radius*radius; // 3.141592는 상수
	printf("원의 면적: %f \n", area);

	return 0;
}