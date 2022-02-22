/*
0601.

키보드에서 하나의 문자를 읽어서 모음과 자음을 구분하는 프로그램을 작성하여 보자.
단, switch 문을 사용한다.

*/

#include <stdio.h>

int main(void)
{
	char ch; // 입력받을 문자
	printf("문자를 입력하시오: ");
	scanf_s("%c", &ch);

	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("모음입니다.\n");
		break;

	default:
		printf("자음입니다.\n");
		break;
	}

	return 0;
}