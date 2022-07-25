#include <stdio.h>
#define SIZE 5

int main(void)
{
	int data[SIZE]; // 크기가 SIZE인 배열 선언
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("정수를 입력하시오: "); // 배열 원소에 정수를 입력
		scanf_s("%d", &data[i]);
	}

	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("%d ", data[i]);
	}

	return 0;
}