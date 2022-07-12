#include <stdio.h>

int counter; // 전역변수는 자동으로 0으로 초기화됨

int main(void)
{
	printf("counter = %d\n", counter);

	return 0;
}