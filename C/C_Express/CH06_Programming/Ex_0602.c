/*
0602.

사용자로부터 2개의 정수를 받아서 첫 번째 정수가 두 번째 정수로 나누어 떨어지는 지를 검사하는 프로그램을 작성하라.
즉 약수인지를 검사한다.

*/

#include <stdio.h>

int main(void)
{
	int a, b; // 입력받을 정수

	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);

	printf("정수를 입력하시오: ");
	scanf_s("%d", &b);

	if (a%b == 0)
		printf("약수입니다.\n");
	else
		printf("약수가 아닙니다.\n");

	return 0;
}