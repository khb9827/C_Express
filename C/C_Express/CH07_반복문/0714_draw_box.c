// 반복을 이용한 네모 그리기
#include <stdio.h>

int main(void)
{
	int i;

	printf("**********\n");

	// i가 0부터 5까지 5번 반복. 5가 되면 반복이 중지된다.
	for (i = 0; i < 5; i++)
		printf("*        *\n");

	printf("**********\n");

	return 0;
}