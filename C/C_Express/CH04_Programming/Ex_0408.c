/*
0408.

'a'+1, 'a'+2, 'a'+3을 문자 형식(%c)으로 출력하는 프로그램을 작성하라.
이 프로그램에서 알 수 있는 것은 무엇인가?

*/

#include <stdio.h>

int main(void)
{
	char a; // 문자

	printf("'a'+ 1 = %c \n", 'a' + 1);
	printf("'a'+ 2 = %c \n", 'a' + 2);
	printf("'a'+ 3 = %c \n", 'a' + 3);

	return 0;
}