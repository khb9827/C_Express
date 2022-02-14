/*
0510.

조건 연산자 ?만을 이용하여 2차원 공간의 x 좌표와 y 좌표를 입력받아서 그 좌표가 속하는 사분면을 출력하는 프로그램을 작성하라.
(x>0 && y>0)? printf("1사분면") : printf(" ");와 같은 문장을 사용하여 작성한다.

*/

#include <stdio.h>

int main(void)
{
	int x, y; // 입력 받을 좌표

	printf("x,y값 입력: ");
	scanf_s("%d %d", &x, &y);

	(x > 0 && y > 0) ? printf("1사분면\n") : printf(" ");
	(x < 0 && y > 0) ? printf("2사분면\n") : printf(" ");
	(x < 0 && y < 0) ? printf("3사분면\n") : printf(" ");
	(x > 0 && y < 0) ? printf("4사분면\n") : printf(" ");

	return 0;
}