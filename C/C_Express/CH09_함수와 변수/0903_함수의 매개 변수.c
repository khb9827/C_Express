#include <stdio.h>

int inc(int counter);

int main(void)
{
	int i = 10;

	printf("함수 호출 전 i = %d\n", i);
	inc(i); // 함수에 복사본이 전달되므로 변수 i에 영향을 끼치지 않음(call by value)
	printf("함수 호출 후 i = %d\n", i);

	return 0;
}

int inc(int counter)
{
	counter++; // 매개 변수를 증가하더라도 인수 i에 영향을 주지 않음
	return counter;
}
