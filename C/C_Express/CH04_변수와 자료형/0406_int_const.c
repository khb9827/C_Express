#include <stdio.h>

int main(void)
{
	int x = 10; // 10진수 10
	int y = 010; // 8진수로서 10진수로 변환하면 8
	int z = 0x10; // 16진수로서 10진수로 변환하면 16

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}