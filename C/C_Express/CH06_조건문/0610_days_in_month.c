// 달의 일수를 계산하는 프로그램
#include <stdio.h>

int main(void)
{
	int month, days;

	printf("달을 입력하시오: ");
	scnaf_s("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
		break;

	// 의도적으로 break문 생략
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	
	// 1,3,5,7,8,10,12월 처리
	default:
		days = 31;
		break;
	}

	printf("%d월의 일수는 %d입니다.\n", days);

	return 0;
}