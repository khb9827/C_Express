#include <stdio.h>

void sub(void);

int main(void)
{
	int i;

	for (i = 0; i < 3; i++)
		sub();

	return 0;
}

void sub(void)
{
	int auto_count = 0; // 자동 변수 : sub() 함수 종료 시 소멸됨
	static int static_count = 0; // 정적 변수 : sub() 함수가 종료되어도 자동으로 소멸되지 않음

	auto_count++; // 이전 값이 유지되지 않음
	static_count++; // 이전 값이 유지되면서 증가함

	printf("auto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
}