/*
0505.

100보다 작은 정수를 입력받아서 이것을 십의 자리, 일의 자리로 분리하여 출력하는 프로그램을 작성하라.
즉 사용자가 정수 23을 입력하면 2,3을 차례로 출력하면 된다.

*/

#include <stdio.h>

int main(void)
{
	int num; // 입력받을 정수
	int tens, units; // 십의 자리, 일의 자리

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	tens = num / 10;
	units = num % 10;

	printf("십의 자리: %d\n", tens);
	printf("일의 자리: %d\n", units);

	return 0;
}