/*
0302.

미국에서는 거리를 표시하는데 마일을 사용한다.
마일을 미터로 환산하는 프로그램을 만들어보자.
사용자로부터 마일 단위로 거리르 입력 받아서 변수에 저장한다.
이 변수에 1609를 곱하여 미터로 변환한다.
미터로 변환된 값을 화면에 출력한다.
실수값을 사용한다.

*/

#include <stdio.h>

int main(void)
{
	double mile; // 마일
	double meter; // 미터

	printf("마일을 입력하시오: ");
	scanf_s("%lf", &mile);

	meter = mile * 1609;
	printf("%lf마일은 %lf미터입니다.\n", mile, meter);

	return 0;
}