// 나머지 연산자 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60 // 1분은 60초

int main(void)
{
	int input, minute, second; // 입력, 분, 초
	
	printf("초를 입력하시오: ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE; // 몇분인지 알기위해 60초 단위로 나눔
	second = input % SEC_PER_MINUTE; // 몇초인지 알기위해 60초 단위로 나눈 나머지를 구함
	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);

	return 0;
}