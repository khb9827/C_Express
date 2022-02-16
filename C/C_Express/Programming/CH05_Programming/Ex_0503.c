/*
0503.

3개의 정수 값을 입력받아서, 3개의 정수 값 중에서 최대값을 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int a, b, c; // 3개의 입력받을 정수
	int max,tmp; // 최댓값, 임시저장값

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	tmp = a > b ? a : b;
	max = tmp > c ? tmp : c;
	printf("최댓값: %d\n", max);

	return 0;
}