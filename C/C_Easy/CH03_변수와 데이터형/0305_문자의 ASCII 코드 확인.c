/* Ex 03_05.c */
#include <stdio.h>

int main(void)
{
	char ch;  // char형 변수 선언

	scanf_s("%c", &ch);
	printf("%c 문자의 ASCII 코드 : %d (%x) \n", ch, ch, ch);

	return 0;
}