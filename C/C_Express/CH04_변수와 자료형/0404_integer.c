/* 정수 자료형을 사용하는 프로그램 */
#include <stdio.h>

int main(void)
{
	short year = 0; // shor형 변수 선언
	int sale = 0; // int형 변수 선언
	long total_sale = 0; // long형 변수 선언
	long long large_value; // 64비트 정수형

	year = 10; // 약 3만2천을 넘지 않도록 주의
	sale = 200000000; // 약 21억을 넘지 않도록 주의
	total_sale = year * sale; // 약 21억을 넘지 않도록 주의

	printf("total_sale = %d \n", total_sale);

	return 0;
}