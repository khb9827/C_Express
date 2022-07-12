#include <stdio.h>

int x = 123; // 전역변수

void sub1()
{
	printf("In sub1() x = %d\n", x); // 전역 변수 x 접근
}

void sub2()
{
	printf("In sub2() x = %d\n", x); // 전역 변수 x 접근
}

int main(void)
{
	sub1();
	sub2();

	return 0;
}