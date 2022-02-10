/*
0501.

사용자로부터 2개의 정수를 입력받아서 첫 번째 정수를 두 번째 정수로 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int a, b; // 입력받을 두 개의 정수
	int quotient, remainder; // 몫, 나머지

	printf("2개의 정수를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	quotient = a / b;
	remainder = a % b;

	printf("몫: %d 나머지: %d\n", quotient, remainder);

	return 0;
}