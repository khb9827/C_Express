/*
0901.

덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램을 작성하여 보자.
이번에는 각 연산들이 몇 번씩 계산되었는지를 기억하게 하자.
각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력한다.

(a) 정적 지역 변수를 사용하여 프로그램을 작성하라.
(b) 전역 변수를 사용하여 프로그램을 작성하라.

*/

// (a) 정적 지역 변수를 사용한 프로그램
#include <stdio.h>

int sum(int a, int b); // 덧셈
int sub(int a, int b); // 뺄셈
int mul(int a, int b); // 곱셈
int div(int a, int b); // 나눗셈

int main(void)
{
	int a, b; // 두 정수
	char op; // 연산자
	int result; // 결과값 

	while (1)
	{
		printf("연산을 입력하시오: ");
		scanf_s("%d %c %d", &a, &op, 1, &b);

		switch (op)
		{
		case '+':
			result = sum(a, b);
			break;

		case '-':
			result = sub(a, b);
			break;

		case '*':
			result = mul(a, b);
			break;

		case '/':
			result = div(a, b);
			break;
		}

		printf("연산 결과 : %d\n", result);
	}

	return 0;
}

int sum(int a, int b) // 덧셈
{
	static int count;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	return a + b;
}

int sub(int a, int b) // 뺄셈
{
	static int count;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	return a - b;
}

int mul(int a, int b) // 곱셈
{
	static int count;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	return a * b;
}

int div(int a, int b) // 나눗셈
{
	static int count;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	return a / b;
}