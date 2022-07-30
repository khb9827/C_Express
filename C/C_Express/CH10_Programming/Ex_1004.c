/*
1004.

2개의 정수 배열 a,b를 받아서 배열 a의 원소를 배열 b로 복사하는 함수 array_copy(int a[], int b[], int size)를 작성하고 테스트하라.
이 함수는 a[0]를 b[0]에, a[1]을 b[1]에, ... a[size-1]을 b[size-1]에 대입한다.
이 함수의 반환값은 없다.

*/

#include <stdio.h>

#define SIZE 5

void array_copy(int a[], int b[], int size); // 배열 복사

int main(void)
{
	int a[SIZE], b[SIZE];
	int i;

	printf("배열 a[] 원소 입력: ");
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &a[i]);

	printf("배열 b[] 원소 입력: ");
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &b[i]);

	printf("배열 복사 전\n");
	printf("배열 a[] : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n");

	printf("배열 b[] : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", b[i]);
	printf("\n");

	printf("배열 복사 후\n");
	array_copy(a, b, SIZE);

	printf("배열 a[] : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n");

	printf("배열 b[] : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", b[i]);
	printf("\n");
	
	return 0;
}

void array_copy(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		b[i] = a[i];
	}
}