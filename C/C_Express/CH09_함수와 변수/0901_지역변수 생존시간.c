#include <stdio.h>

int main(void)
{
	int i;

	// 하나의 블록, temp는 지역변수
	// 블록이 시작될 때 생성, 끝날 때 소멸
	for (i = 0; i < 5; i++)
	{
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++;
	}
}