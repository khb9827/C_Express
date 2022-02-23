/*
0606.

사용자로부터 몇 월인지를 정수로 입력받아서 Jan와 같은 영어단어로 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int mon; // 월

	printf("월번호를 입력하시오(1-12): ");
	scanf_s("%d", &mon);

	switch (mon)
	{
	case 1:
		printf("Jan\n");
		break;

	case 2:
		printf("Feb\n");
		break;

	case 3:
		printf("Mar\n");
		break;

	case 4:
		printf("Apr\n");
		break;

	case 5:
		printf("May\n");
		break;

	case 6:
		printf("Jun\n");
		break;

	case 7:
		printf("Jul\n");
		break;

	case 8:
		printf("Aug\n");
		break;

	case 9:
		printf("Sep\n");
		break;

	case 10:
		printf("Oct\n");
		break;

	case 11:
		printf("Nov\n");
		break;

	case 12:
		printf("Dec\n");
		break;
	}

	return 0;
}