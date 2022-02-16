/*
0506.

int형의 정수를 비트 연산자를 사용하여서 2의 보수(2's complement)로 변환하는 프로그램을 작성하라.
2의 보수는 먼저 전체 비트를 반전시킨 후에 1을 더하면 된다.

*/

#include <stdio.h>

int main(void)
{
	int num; // 입력받을 정수
	int complement; // 2의 보수

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	complement = ~num + 1;
	printf("2의 보수: %d\n", complement);

	return 0;
}