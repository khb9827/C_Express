/*
1003.

2개의 정수 배열 a,b를 받아서 대응되는 배열 원소가 같은지를 검사하는 함수 array_equal(int a[], int b[], int size)를 작성하고 테스트하라.
이 함수는 a[0]와 b[0], a[1]와 b[1], ..., a[size-1]와 b[size-1]가 같은지를 검사한다.
만약 전체 원소가 같다면 1을 반환하고 그렇지 않으면 0을 반환한다.

*/

#include <stdio.h>

#define SIZE 5

int array_equal(int a[], int b[], int size); // 배열 원소 검사

int main(void)
{
	int a[SIZE], b[SIZE];
	int i;

	printf("배열 a 원소 5개 입력 : ");
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &a[i]);

	printf("배열 b 원소 5개 입력 : ");
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &b[i]);

	printf("배열 a[] 원소 : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	printf("배열 b[] 원소 : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", b[i]);
	printf("\n");

	if (array_equal(a, b, SIZE) == 1)
		printf("배열 원소가 같음\n");
	else
		printf("배열 원소가 같지 않음\n");

	return 0;
}

int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i] != b[i])
			return 0;
	}

	return 1;
}