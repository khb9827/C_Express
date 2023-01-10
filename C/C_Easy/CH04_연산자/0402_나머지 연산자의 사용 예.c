/* Ex 04_02.c */
#include <stdio.h>

int main(void)
{
	int num;
	int thousands, tens;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	thousands = num / 1000;
	tens = num % 1000; // 나머지 연산자

	printf("%d,%d \n", thousands, tens);

	return 0;
}