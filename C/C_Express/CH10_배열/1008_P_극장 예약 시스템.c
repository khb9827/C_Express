/* 실습. 극장 예약 시스템 */
#include <stdio.h>
#define SIZE 10 // 배열의 크기는 기호 상수로 정의하는 것이 편리하다. 후에 배열의 크기를 변경할 때 편리하다.

int main(void)
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 }; // 예약 여부를 나타내는 1차원 배열을 선언하고 0으로 초기화한다.

	while (1)
	{
		printf("좌석을 예약하시겠습니까? (y 또는 n) ");
		scanf_s(" %c", &ans1); // 공백 문자는 제외하고 일반 문자만을 입력받는다.

		if (ans1 == 'y')
		{
			printf("--------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("--------------------------------\n");

			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");

			printf("몇 번째 좌석을 예약하시겠습니까");
			scanf_s("%d", &ans2);

			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1부터 10 사이의 숫자를 입력하세요\n");
				continue;
			}
			if (seats[ans2 - 1] == 0) { // 예약되지 않았으면
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else // 이미 예약되었으면
				printf("이미 예약된 자리입니다.\n");
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}