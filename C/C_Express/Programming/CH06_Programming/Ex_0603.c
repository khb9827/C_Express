/*
0603.

사용자로부터 3개의 정수를 읽어 들인 후에 if-else 문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int a, b, c; // 입력받을 3개 정수
	int min; // 최솟값

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a < b&&a < c)
		min = a;
	else if (b < a&&b < c)
		min = b;
	else
		min = c;

	printf("제일 작은 정수는 %d입니다.\n", min);

	return 0;
}