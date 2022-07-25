/* 실습. 최소값 찾기 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 0 };
	int i, minimum;

	printf("----------------------------------------\n");
	printf("1   2   3   4   5   6   7   8   9   10\n");
	printf("----------------------------------------\n");
	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		prices[i] = (rand() % 100) + 1; // 배열을 난수로 초기화한다.
		printf("%-3d ", prices[i]); // %-3d는 3자리 필드에 왼쪽 정렬하여 출력하는 것을 의미한다.
	}
	printf("\n\n");

	minimum = prices[0]; // 첫 번째 배열 원소를 최소값으로 가정

	for (i = 1; i < SIZE; i++)
	{
		if (minimum > prices[i]) // 현재 값보다 배열 원소가 작으면 배열 원소를 최소값으로 복사한다.
			minimum = prices[i];
	}

	printf("최소값은 %d입니다.\n", minimum);

	return 0;
}