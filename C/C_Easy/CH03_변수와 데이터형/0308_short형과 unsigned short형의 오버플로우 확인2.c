/* Ex 03_08.c */
#include <stdio.h>
#include <limits.h> // SHRT_MAX 등의 매크로 상수가 정의된 헤더 포함

int main(void)
{
	short num1 = SHRT_MAX; // short형의 최대값
	short num2 = SHRT_MIN; // short형의 최소값
	unsigned short num3 = USHRT_MAX; // unsigned shor형의 최대값
	unsigned short num4 = 0;
	
	// 오버플로우 발생
	num1 = num1 + 1;
	num2 = num2 - 1;
	num3 = num3 + 1;
	num4 = num4 - 1;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);
	printf("num4 = %d\n", num4);

	return 0;
}