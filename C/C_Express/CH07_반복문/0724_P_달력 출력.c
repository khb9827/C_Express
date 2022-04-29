/* 실습. 달력 출력 */
#include <stdio.h>
#define START_DAY 3 // 첫번째 날이 수요일
#define DAYS_OF_MONTH 31 // 달의 일수

int main(void)
{
	int day, date; // 요일, 날짜

	printf("====================\n");
	printf("일 월 화 수 목 금 토\n");
	printf("====================\n");

	// 일요일부터 첫날까지 공백 출력
	for (day = 0; day < START_DAY; day++)
		printf("   "); 
	for (date = 1; date <= DAYS_OF_MONTH; date++)
	{
		if (day == 7)
		{
			day = 0; // 일요일이면 줄바꿈 출력
			printf("\n");
		}
		day++;
		printf("%2d ", date);
	}
	printf("\n====================\n");

	return 0;
}