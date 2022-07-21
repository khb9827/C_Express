/*
0804.

월급에 붙는 소득세를 계산하는 함수 get_tax(int income)를 작성하고 테스트하여 보자.
과표 구간은 1000만원 이하 8%, 1000만원 초과는 10%로 되어 있다고 가정한다.
사용자로부터 소득을 입력받아서 세금을 계산하는 프로그램을 작성하라.

*/

#include <stdio.h>

int get_tax(int income);

int main(void)
{
	int income; // 소득
	printf("소득을 입력하시오(만원): ");
	scanf_s("%d", &income);

	printf("소득세는 %d만원입니다.\n", get_tax(income));

	return 0;
}

int get_tax(int income)
{
	int tax = 0;
	if (income <= 1000) // 소득 1000만원 이하
		tax = income * 0.08;
	else // 소득 1000만원 초과
		tax = income * 0.1;

	return  tax;
}