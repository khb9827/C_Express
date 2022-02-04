/*
0410.

다음과 같이 화면에 출력하는 프로그램을 작성하라.

*/

#include <stdio.h>

int main(void)
{
	char c = 'A'; // 아스키 코드

	printf("\"ASCII code\", \'%c\', \'%c\', \'%c, \n\\t \\a \\n \n", c, c + 1, c + 2);

	return 0;
}