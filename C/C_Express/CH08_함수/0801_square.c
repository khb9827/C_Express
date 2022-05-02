// 정수의 제곱을 계산하는 함수 예제
#include <stdio.h>

int square(int n); // 함수 원형 선언

int main(void)
{
	int result;

	result = square(5); // 함수 호출, 함수 반환값이 result에 저장된다.
	printf("%d \n", result);

	return 0;
}

// 함수 정의
int square(int n)
{
	return n * n;
}