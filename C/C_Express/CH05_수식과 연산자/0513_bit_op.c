﻿#include <stdio.h>

int main(void)
{
	int x = 9;
	int y = 10;

	printf("비트 AND = %08X\n", x&y);
	printf("비트 OR = %08X\n", x | y);
	printf("비트 XOR = %08X\n", x^y);
	printf("비트 NOT = %08X\n", ~x);

	return 0;
}