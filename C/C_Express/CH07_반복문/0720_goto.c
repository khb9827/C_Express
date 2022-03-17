#include <stdio.h>
#include <conio.h>

int main(void)
{
	int x, y;

	for (y = 1; y < 10000; y++)
	{
		for (x = 1; x < 50; x++)
		{
			if (_kbhit()) // 키보드가 눌려지면 1을 반환한다.
				goto OUT; // 키가 눌려지면 OUT으로 점프
			printf("*");
		}
		printf("\n");
	}

OUT:
	return 0;
}