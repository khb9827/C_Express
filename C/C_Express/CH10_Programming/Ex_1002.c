/*
1002.

크기가 10인 1차원 배열에 난수를 저장한 후에, 최대값과 최소값을 출력하는 프로그램을 작성하라.
난수는 rand() 함수를 호출하여 생성하라.

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
	int arr[SIZE];
	int i, min, max; // 배열 원소, 최소값, 최대값

	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 50 + 1; // 배열 원소에 난수 저장
		printf("%d ", arr[i]); // 배열 나열
	}
	printf("\n");

	min = arr[0]; // 첫번째 원소 최소값으로 가정
	max = arr[0]; // 첫번째 원소 최대값으로 가정
	for (i = 1; i < SIZE; i++)
	{
		if (arr[i] < min) // 최소값
			min = arr[i];

		if (arr[i] > max) // 최대값
			max = arr[i];
	}

	printf("최소값 : %d\n", min);
	printf("최대값 : %d\n", max);

	return 0;
}