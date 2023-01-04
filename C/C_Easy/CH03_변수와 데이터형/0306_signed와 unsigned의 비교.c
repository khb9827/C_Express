/* Ex 03_06.c */
#include <stdio.h>

int main(void)
{
	short num1 = -10; // 부호 있는 정수, 최상위 비트 음수이므로 1로 설정
	unsigned short num2 = num1; // 부호 없는 정수, 최상위 비트 양수이므로 값 저장

	printf("부호 있는 정수 : %d\n", num1);
	printf("부호 없는 정수 : %d\n", num2);

	return 0;
}