/*
실습. 자동차 게임
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void disp_car(int car_number, int distance);

int main(void)
{
	int i;
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned)time(NULL)); // 시드값 현재 시각으로 설정

	for (i = 0; i < 6; i++)
	{
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		printf("-----------------------------\n");
		getch(); // 아무 키나 입력하기를 기다림
	}

	return 0;
}

void disp_car(int car_number, int distance)
{
	int i;

	printf("CAR #%d: ", car_number);
	for (i = 0; i < distance / 10; i++)
	{
		printf("*");
	}
	printf("\n");
}