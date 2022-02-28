/*
0611.

사용자로부터 하나의 문자를 입력받아서 문자가 'R'이면 "Rectangle"이라고 출력한다.
'T'이면 "Triangle", 'C'이면 "Circle"이라고 출력하는 프로그램을 작성한다.
그 외의 문자가 들어오면 "Unknown"이라고 출력한다.

*/

#include <stdio.h>

int main(void)
{
	char ch; // 입력받을 문자

	printf("문자를 입력하시오: ");
	scanf_s("%c", &ch);

	switch (ch)
	{
	case 'C':
		printf("Circle\n");
		break;

	case 'T':
		printf("Triangle\n");
		break;

	case 'R':
		printf("Rectangle\n");
		break;

	default:
		printf("잘못된 값\n");
		break;
	}

	return 0;
}