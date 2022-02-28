/*
0610.

(x,y)의 좌표를 입력받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	int x, y; // 입력받을 좌표
	int quad = 0; // 사분면
	printf("좌표(x,y): ");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
		quad = 1;
	else if (x > 0 && y < 0)
		quad = 2;
	else if (x < 0 && y < 0)
		quad = 3;
	else if (x < 0 && y>0)
		quad = 4;
	else
		printf("원점 (0,0)\n");

	printf("%d사분면\n", quad);

	return 0;
}