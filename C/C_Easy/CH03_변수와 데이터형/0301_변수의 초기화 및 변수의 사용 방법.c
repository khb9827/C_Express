/* Ex 03_01.c */
#include <stdio.h>

int main(void)
{
	int amount; // 초기화되지 않은 정수형 변수
	int price = 1000; // 초기화된 정수형 변수

	printf("수량 : %d, 가격 : %d\n", amount, price);
	amount = 100; // 변수에 값 대입
	price = 2000; // 변수에 값 대입
	printf("수량 : %d, 가격 : %d\n", amount, price);

	return 0;
}