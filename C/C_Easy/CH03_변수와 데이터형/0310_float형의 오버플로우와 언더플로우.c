/* Ex 03_10.c */
#include <stdio.h>

int main(void)
{
	// float형으로 표현할 수 없는 값 초기화
	float num1 = 3.5e39;
	float num2 = 1.8e-39;

	printf("num1 = %30.25f\n", num1);
	printf("num2 = %30.25f\n", num2);

	return 0;
}