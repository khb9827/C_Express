/*
0801.

다음과 같은 간단한 기능을 하는 함수들을 작성하고, 사용자로부터 임의의 값을 입력받은 후에 작성한 함수들을 테스트하여 보자.

(a) 주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int even(int n)
(b) 주어진 정수의 절대값을 구하는 함수 int absolute(int n)
(c) 주어진 정수가 음수이면 -1을, 양수이면 1을 0이면 0을 반환하는 함수 int sign(int n)

*/

#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void)
{
	int num; // 입력받을 정수
	
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	printf("even()의 결과: ");
	if (even(num) == 1)
		printf("짝수\n");
	else
		printf("홀수\n");

	printf("absolute()의 결과: %d\n", absolute(num));

	printf("sign()의 결과: ");
	if (sign(num) == 1)
		printf("양수\n");
	else if (sign(num) == -1)
		printf("음수\n");
	else if (sign(num) == 0)
		printf("0\n");

	return 0;
}

// (a) 홀수 짝수 구하는 함수
int even(int n)
{
	if (n % 2 == 0) // 짝수
		return 1;
	else // 홀수
		return 0;
}

// (b) 절대값을 구하는 함수
int absolute(int n)
{
	if (n < 0) // 음수일 경우 양수로
		n = n * -1;

	return n;
}

// (c) 음수 양수 구하는 함수
int sign(int n)
{
	if (n < 0) // 음수
		return -1;
	else if (n > 0) // 양수
		return 1;
	else // 0
		return 0;
}