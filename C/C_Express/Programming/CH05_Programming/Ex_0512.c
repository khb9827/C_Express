/*
0512.

비트 이동 연산을 이용하여 문자 4개를 받아서 하나의 unsigned int형의 변수 안에 저장하는 프로그램을 작성하라.
첫 번째 문자는 비트 0부터 비트 7까지에 저장되고,
두 번째 문자는 비트 8부터 비트 15까지,
세 번째 문자는 비트 16에서 비트 23까지,
네 번째 문자는 비트 24부터 비트 31까지에 저장된다.
결과로 생성되는 정수값은 16진수로 출력하도록 한다.
비트 이동 연산과 비트 OR 연산을 사용하라.

*/

#include <stdio.h>

int main(void)
{
	char ch; // 입력받을 문자
	unsigned int res=0x00000000; // 결과 값

	printf("첫번째 문자: ");
	scanf_s(" %c", &ch);
	res = res | ch;
	printf("두번째 문자: ");
	scanf_s(" %c", &ch);
	res = res | ch << 8;

	printf("세번째 문자: ");
	scanf_s(" %c", &ch);
	res = res | ch << 16;

	printf("네번째 문자: ");
	scanf_s(" %c", &ch);
	res = res | ch << 24;

	printf("결과값: %08X\n", res);

	return 0;
}