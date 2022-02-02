/*
0404.

상자의 부피를 구하는 프로그램을 작성하여 보자.
부피는 길이*너비*높이로 계산된다.
길이, 너비, 높이는 모두 double형의 실수로 입력받아 보자.

*/

#include <stdio.h>

int main(void)
{
	double w, h, d; // 가로, 세로, 높이
	double v; // 부피

	printf("상자의 가로, 세로, 높이를 한번에 입력: ");
	scanf_s("%lf %lf %lf", &w, &h, &d);

	v = w * h*d;
	printf("상자의 부피는 %lf입니다.\n", v);

	return 0;
}