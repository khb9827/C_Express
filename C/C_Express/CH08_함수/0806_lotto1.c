#include <stdio.h>
#include <stdlib.h> // rand()의 원형 정의

int main(void)
{
	int i;

	for (i = 0; i < 6; i++)
		printf("%d ", rand()); // 호출할 때마다 난수가 생성된다.

	return 0;
}