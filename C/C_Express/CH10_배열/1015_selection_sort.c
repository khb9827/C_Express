#include <stdio.h>
#define SIZE 10

int main(void)
{
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };

	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i; // i번째부터 시작하여 배열의 맨 마지막 원소 중 최소값을 찾아야 하므로 i번째 원소를 최소값이라고 가정한다.

		for (j = i + 1; j < SIZE; j++)
		{
			if (list[j] < list[least]) // (i+1)번째 원소부터 마지막 원소 중 최소값을 찾는다. 현재 최소값과 비교해 더 작으면 해당 인덱스를 least에 저장한다.
				least = j;
		}
		// i번째 원소와 least번째 원소 위치를 교환한다.
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");

	return 0;
}