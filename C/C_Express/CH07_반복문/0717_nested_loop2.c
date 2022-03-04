#include <stdio.h>

int main(void)
{
	int x, y;

	// 외부 반복문(5번 반복)
	for (y = 1; y <= 5; y++)
	{
		// 내부 반복문(y번 반복)
		for (x = 0; x < y; x++)
			printf("*");

		printf("\n");
	}

	return 0;
}