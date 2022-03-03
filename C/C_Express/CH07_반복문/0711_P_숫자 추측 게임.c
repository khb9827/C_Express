/* 실습. 숫자 추측 게임 */
#include <stdio.h>

int main(void)
{
	int answer = 59; // 정답
	int guess; // 입력
	int tries = 0; // 시도 횟수

	do
	{
		printf("정답을 추측하여 보시오: ");
		scanf_s("%d", &guess);
		tries++;

		if (guess < answer) // 정답보다 낮게 입력한 경우
			printf("제시한 정수가 낮습니다.\n");
		if (guess > answer) // 정답보다 높게 입력한 경우
			printf("제시한 정수가 높습니다.\n");

	} while (guess != answer); // 정답과 같으면 반복 종료

	printf("축하합니다. 시도횟수 = %d\n", tries);
	return 0;
}