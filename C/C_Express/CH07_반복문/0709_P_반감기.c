/* 실습. 반감기 */
#include <stdio.h>

int main(void)
{
	int halflife; // 반감기
	double initial; // 초기값
	double current; // 현재값
	int years = 0; // 걸린 시간

	printf("반감기를 입력하시오(년): ");
	scanf_s("%d", &halflife);

	initial = 100.0;
	current = initial;
	// 현재값이 초기값의 10%이상이면 반복
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d년 후에 남은 양 = %f\n", years, current);
	}
	printf("1/10 이하로 되기까지 걸린 시간 = %d년\n", years);

	return 0;
}