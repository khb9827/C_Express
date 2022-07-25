/* 실습. 투표 집계하기 */
#include <stdio.h>

#define SIZE 11

int main(void)
{
	int freq[SIZE] = { 0 }; // 빈도를 나타내는 배열
	int i, candidate;

	while (1)
	{
		printf("몇번 후보자를 선택하시겠습니까?(종료 -1): ");
		scanf_s("%d", &candidate);

		if (candidate < 0) // 음수이면 반복 종료
			break;

		freq[candidate]++; // 해당되는 점수의 빈도를 증가한다.
	}

	printf("값 득표결과\n");
	for (i = 1; i < SIZE; i++)
		printf("%3d    %3d\n", i, freq[i]);

	return 0;
}