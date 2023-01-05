/* Ex 03_09.c */
#include <stdio.h>

int main(void)
{
	float pi1 = 3.141592653589793;
	double pi2 = 3.141592653589793;

	printf("float  형의 pi 값 : %f\n", pi1);
	printf("double 형의 pi 값 : %f\n", pi2);
	
	// %30.25f는 전체 유효 숫자 30자리 중에서 소수점 이하 25자리까지 출력
	printf("float  형의 pi 값 : %30.25f\n", pi1);
	printf("double 형의 pi 값 : %30.25f\n", pi2);
}